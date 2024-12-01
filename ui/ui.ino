#include <lvgl.h>
#include <TFT_eSPI.h>
#include <ui.h>

#include "uiFunctions.h"
/*Don't forget to set Sketchbook location in File/Preferences to the path of your UI project (the parent foder of this INO file)*/
void my_print(const char * buf)
{
  Serial.printf(buf);
  Serial.flush();
}

/*Change to your screen resolution*/
static const uint16_t screenWidth  = 480;
static const uint16_t screenHeight = 320;

static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[ screenWidth * screenHeight / 10 ];

TFT_eSPI tft = TFT_eSPI(screenHeight, screenWidth); /* TFT instance */

TaskHandle_t Task1;
TaskHandle_t taskHandle = NULL;
void TaskSendRPM(void *pvParameters);

volatile bool guiReady = false;

void touch_calibrate()//屏幕校准
{
  uint16_t calData[5];
  uint8_t calDataOK = 0;

  //校准
  tft.fillScreen(TFT_BLACK);
  tft.setCursor(20, 0);
  tft.setTextFont(2);
  tft.setTextSize(1);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);

  tft.println("按指示触摸角落");

  tft.setTextFont(1);
  tft.println();

  tft.calibrateTouch(calData, TFT_MAGENTA, TFT_BLACK, 15);

  Serial.println(); Serial.println();
  Serial.println("//在setup()中使用此校准代码:");
  Serial.print("uint16_t calData[5] = ");
  Serial.print("{ ");

  for (uint8_t i = 0; i < 5; i++)
  {
    Serial.print(calData[i]);
    if (i < 4) Serial.print(", ");
  }

  Serial.println(" };");
  Serial.print("  tft.setTouch(calData);");
  Serial.println(); Serial.println();

  tft.fillScreen(TFT_BLACK);

  tft.setTextColor(TFT_GREEN, TFT_BLACK);
  tft.println("XZ OK!");
  tft.println("Calibration code sent to Serial port.");

}

/* Display flushing */
void my_disp_flush( lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p )
{
  uint32_t w = ( area->x2 - area->x1 + 1 );
  uint32_t h = ( area->y2 - area->y1 + 1 );

  tft.startWrite();
  tft.setAddrWindow( area->x1, area->y1, w, h );
  tft.pushColors( ( uint16_t * )&color_p->full, w * h, true );
  tft.endWrite();

  lv_disp_flush_ready( disp );
}

/*Read the touchpad*/
void my_touchpad_read( lv_indev_drv_t * indev_driver, lv_indev_data_t * data )
{
  uint16_t touchX = 0, touchY = 0;

  bool touched = tft.getTouch( &touchX, &touchY, 600 );

  if ( !touched )
  {
    data->state = LV_INDEV_STATE_REL;
  }
  else
  {
    data->state = LV_INDEV_STATE_PR;

    /*Set the coordinates*/
    data->point.x = touchX;
    data->point.y = touchY;
  }
}
void setup()
{
  int RXD2 = 35;
  int TXD2 = 21;
  Serial.begin(2000000);
  //Serial2.begin(2000000, SERIAL_8N1, RXD2, TXD2);
  xTaskCreatePinnedToCore(
    TaskSendRPM, /* Function to implement the task */
    "TaskSendRPM", /* Name of the task */
    10000,  /* Stack size in words */
    NULL,  /* Task input parameter */
    1,  /* Priority of the task */
    &Task1,  /* Task handle. */
    0); /* Core where the task should run */

  xTaskCreatePinnedToCore(
    serialToRpmTask,    // Function to run
    "SerialToRPMTask",  // Task name
    10000,               // Stack size
    NULL,               // Parameters
    1,                  // Priority
    &taskHandle,        // Task handle
    1                   // Core to run on (Core 1)
  );
  prefHelper.getProfileTime(profileTime);
  prefHelper.getProfileRPM(profileRPM);
  savedProfileNumber = prefHelper.getProfileNumber();
  lv_init();

  //lv_log_register_print_cb( my_print ); /* register print function for debugging */

  tft.init();          /* TFT init */
  tft.setRotation( 3 ); /* Landscape orientation, flipped */
  //touch_calibrate();
  uint16_t calData[5] = { 265, 3572, 294, 3503, 5 };
  tft.setTouch(calData);
  lv_disp_draw_buf_init( &draw_buf, buf, NULL, screenWidth * screenHeight / 10 );

  /*Initialize the display*/
  static lv_disp_drv_t disp_drv;
  lv_disp_drv_init( &disp_drv );
  /*Change the following line to your display resolution*/
  disp_drv.hor_res = screenWidth;
  disp_drv.ver_res = screenHeight;
  disp_drv.flush_cb = my_disp_flush;
  disp_drv.draw_buf = &draw_buf;
  lv_disp_drv_register( &disp_drv );

  /*Initialize the (dummy) input device driver*/
  static lv_indev_drv_t indev_drv;
  lv_indev_drv_init( &indev_drv );
  indev_drv.type = LV_INDEV_TYPE_POINTER;
  indev_drv.read_cb = my_touchpad_read;
  lv_indev_drv_register( &indev_drv );


  ui_init();

  setMainChart();
  //Serial.println("Done GUI True");
  guiReady = true;
}

void loop()
{
  lv_timer_handler(); /* let the GUI do its work */
  setProfileFieldNumber();
  delay(1);
}

void TaskSendRPM(void *pvParameters) {  // This is a task.
  unsigned long previousMillis = 0;
  unsigned long startingTimer = 0;
  double acceleration = 0.0;
  rpmSetPoint = 0.0;
  int i = 0;
  for (;;) {
    if (runFlag) {
      if (initFlag) {
        initFlag = false;
        i = 1;
        startingTimer = millis();
        previousMillis = millis();
        rpmSetPoint = profileRPM[savedProfileNumber][0];
        Serial.println("T " + String(convertRPMToRads((double)rpmSetPoint)));
        acceleration = (profileRPM[savedProfileNumber][i] - profileRPM[savedProfileNumber][i - 1]) /
                       (profileTime[savedProfileNumber][i] - profileTime[savedProfileNumber][i - 1]);
      }
      //Serial.println(profileTime[savedProfileNumber][i] * 1000 + startingTimer);
      //Serial.println(millis());
      if (millis() > profileTime[savedProfileNumber][i] * 1000 + startingTimer) {
        i++;
        if (i < 10 && profileTime[savedProfileNumber][i] > 0) {
          acceleration = (profileRPM[savedProfileNumber][i] - profileRPM[savedProfileNumber][i - 1]) /
                         (profileTime[savedProfileNumber][i] - profileTime[savedProfileNumber][i - 1]);
        }
        else {
          runFlag = false;
        }
      }
      if (millis() > previousMillis + 10) {
        rpmSetPoint += acceleration / 100;
        Serial.println("T " + String(convertRPMToRads((double)rpmSetPoint)));
      }
      if (!runFlag) {
        initFlag = true;
        Serial.println("T 0");
        lv_obj_add_flag(ui_Spinner3, LV_OBJ_FLAG_HIDDEN);
        plotData = false;
        removeRunningPlot();
        lv_timer_del(plotRunningGraphTimer);
      }
    }
    vTaskDelay(10);
  }
}

void serialToRpmTask(void *pvParameters) {
  unsigned long previousRPMMillis = 0;
  String inputData = "";
  bool connectedState = false;
  Serial.println("Starting RPM Core");
  for (;;) {
    if (guiReady) {
      break;
    }
  }
  while (true) {
    // Check if data is available on Serial
    if (Serial.available()) {
      char inChar = (char)Serial.read();
      // Read the data from Serial
      if (inChar == 'r') {
        // Clear previous data
        inputData = "";
        // Read until newline
        while (Serial.available() && inChar != '\n') {
          inChar = (char)Serial.read();
          inputData += inChar;
        }
        // Convert to RPM if data is numeric
        float velocityRadPerSec = inputData.toFloat();
        receivedRPM = (velocityRadPerSec * 60.0) / (2 * PI);
        previousRPMMillis = millis();
        if (receivedRPM > 0.0) {
          setMotorNeedleGauge(receivedRPM);
        }
      }
    }
    if (previousRPMMillis + 200 < millis() && connectedState == true) {
      connectedState = false;
      lv_label_set_text(ui_MotorStatus, "Not Connected");
      lv_obj_set_style_text_color(ui_MotorStatus, lv_color_hex(0x940000), LV_PART_MAIN | LV_STATE_DEFAULT);
    }
    else if (millis() - previousRPMMillis  < 10 && connectedState == false) {
      connectedState = true;
      lv_label_set_text(ui_MotorStatus, "Motor Connected");
      lv_obj_set_style_text_color(ui_MotorStatus, lv_color_hex(0x004204), LV_PART_MAIN | LV_STATE_DEFAULT);
    }
    // Small delay to yield to other tasks
    vTaskDelay(20);
  }
}
