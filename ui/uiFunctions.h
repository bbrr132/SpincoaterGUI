#ifndef UI_FUNCTIONS_H
#define UI_FUNCTIONS_H
#include "PreferenceHelper.h"

double profileTime[4][10] = {0.0};
double profileRPM[4][10] = {0.0};
PreferenceHelper prefHelper;
lv_coord_t time_data[6][10] = {0};
lv_coord_t rpm_data[6][10] = {0};
double profilePlotTime[10] = {0.0};
double profilePlotRPM[10] = {0.0};
int profileNumber = 0;
int savedProfileNumber = 0;
volatile double rpmSetPoint = 0.0;
float radsSetPoint;
bool runFlag = false;
bool manualRun = false;
bool initFlag = true;
bool setProfileFields = false;
volatile float receivedRPM = 0.0;
lv_coord_t time_run[200];
lv_coord_t rpm_run[200];


volatile uint16_t plotID = 0;
bool plotData = false;
lv_timer_t * plotRunningGraphTimer;
bool resetGraph = false;
static lv_chart_series_t * ui_SelectedProfile_series_3 = nullptr;


double convertRPMToRads(double rpmSetPoint) {
  return rpmSetPoint * 0.10471971767564;
}

void removeRunningPlot() {
  lv_chart_remove_series(ui_RunningProfile, ui_SelectedProfile_series_3);
  lv_chart_refresh(ui_RunningProfile);
}
void setProfileFieldNumber() {
  if (setProfileFields) {
    setProfileFields = false;
    char text[20];
    snprintf(text, sizeof(text), "%.2f", profileTime[profileNumber][0]);
    lv_textarea_set_text(ui_Time1, text);
    snprintf(text, sizeof(text), "%.2f", profileTime[profileNumber][1]);  // Convert the double to string
    lv_textarea_set_text(ui_Time2, text);  // Set the text on the corresponding label
    snprintf(text, sizeof(text), "%.2f", profileTime[profileNumber][2]);  // Convert the double to string
    lv_textarea_set_text(ui_Time3, text);  // Set the text on the corresponding label
    snprintf(text, sizeof(text), "%.2f", profileTime[profileNumber][3]);  // Convert the double to string
    lv_textarea_set_text(ui_Time4, text);  // Set the text on the corresponding label
    snprintf(text, sizeof(text), "%.2f", profileTime[profileNumber][4]);  // Convert the double to string
    lv_textarea_set_text(ui_Time5, text);  // Set the text on the corresponding label
    snprintf(text, sizeof(text), "%.2f", profileTime[profileNumber][5]);  // Convert the double to string
    lv_textarea_set_text(ui_Time6, text);  // Set the text on the corresponding label
    snprintf(text, sizeof(text), "%.2f", profileTime[profileNumber][6]);  // Convert the double to string
    lv_textarea_set_text(ui_Time7, text);  // Set the text on the corresponding label
    snprintf(text, sizeof(text), "%.2f", profileTime[profileNumber][7]);  // Convert the double to string
    lv_textarea_set_text(ui_Time8, text);  // Set the text on the corresponding label
    snprintf(text, sizeof(text), "%.2f", profileTime[profileNumber][8]);  // Convert the double to string
    lv_textarea_set_text(ui_Time9, text);  // Set the text on the corresponding label
    snprintf(text, sizeof(text), "%.2f", profileTime[profileNumber][9]);  // Convert the double to string
    lv_textarea_set_text(ui_Time10, text);  // Set the text on the corresponding label
    snprintf(text, sizeof(text), "%.2f", profileRPM[profileNumber][0]);  // Convert the double to string
    lv_textarea_set_text(ui_RPM1, text);  // Set the text on the corresponding label

    snprintf(text, sizeof(text), "%.2f", profileRPM[profileNumber][1]);  // Convert the double to string
    lv_textarea_set_text(ui_RPM2, text);  // Set the text on the corresponding label
    snprintf(text, sizeof(text), "%.2f", profileRPM[profileNumber][2]);  // Convert the double to string
    lv_textarea_set_text(ui_RPM3, text);  // Set the text on the corresponding label
    snprintf(text, sizeof(text), "%.2f", profileRPM[profileNumber][3]);  // Convert the double to string
    lv_textarea_set_text(ui_RPM4, text);  // Set the text on the corresponding label
    snprintf(text, sizeof(text), "%.2f", profileRPM[profileNumber][4]);  // Convert the double to string
    lv_textarea_set_text(ui_RPM5, text);  // Set the text on the corresponding label
    snprintf(text, sizeof(text), "%.2f", profileRPM[profileNumber][5]);  // Convert the double to string
    lv_textarea_set_text(ui_RPM6, text);  // Set the text on the corresponding label

    snprintf(text, sizeof(text), "%.2f", profileRPM[profileNumber][6]);  // Convert the double to string
    lv_textarea_set_text(ui_RPM7, text);  // Set the text on the corresponding label

    snprintf(text, sizeof(text), "%.2f", profileRPM[profileNumber][7]);  // Convert the double to string
    lv_textarea_set_text(ui_RPM8, text);  // Set the text on the corresponding label
    snprintf(text, sizeof(text), "%.2f", profileRPM[profileNumber][8]);  // Convert the double to string
    lv_textarea_set_text(ui_RPM9, text);  // Set the text on the corresponding label
    snprintf(text, sizeof(text), "%.2f", profileRPM[profileNumber][9]);  // Convert the double to string
    lv_textarea_set_text(ui_RPM10, text);  // Set the text on the corresponding label

  }
}



void setProfileNumber(lv_event_t * e)
{
  lv_obj_t *target = lv_event_get_target(e);
  if (target == ui_ProfilePanel1) {
    profileNumber = 0;
  }
  else if (target == ui_ProfilePanel2) {
    profileNumber = 1;
  }
  else if (target == ui_ProfilePanel3) {
    profileNumber = 2;
  }
  else if (target == ui_ProfilePanel4) {
    profileNumber = 3;
  }
  for (int i = 0; i < 10; i++) {
    rpm_data[4][i] = (lv_coord_t)profileRPM[profileNumber][i];
    time_data[4][i] = (lv_coord_t)profileTime[profileNumber][i];
    if (i > 0) {
      if (time_data[4][i] < time_data[4][i - 1])
        time_data[4][i] = time_data[4][i - 1];
    }
  }
  lv_chart_series_t * ui_EditProfile_series_1 = lv_chart_add_series(ui_EditProfile, lv_color_hex(0x808080),
      LV_CHART_AXIS_PRIMARY_Y);
  lv_chart_set_ext_y_array(ui_EditProfile, ui_EditProfile_series_1, rpm_data[4]);
  lv_chart_set_ext_x_array(ui_EditProfile, ui_EditProfile_series_1, time_data[4]);
  lv_chart_refresh(ui_EditProfile);
  setProfileFields = true;
}

static void add_data(lv_timer_t * timer)
{
  if (plotID == 0) {
    ui_SelectedProfile_series_3 = lv_chart_add_series(ui_RunningProfile, lv_color_hex(0xffff),
                                  LV_CHART_AXIS_PRIMARY_Y);
  }
  LV_UNUSED(timer);
  if (plotData) {
    lv_chart_set_value_by_id2(ui_RunningProfile, ui_SelectedProfile_series_3, plotID, (lv_coord_t)plotID + 1, (lv_coord_t)rpmSetPoint);
    lv_chart_refresh(ui_RunningProfile);
    plotID ++;
  }
}

void runButtonTriggered(lv_event_t * e)
{
  if (!runFlag) {
    plotID = 0;
    runFlag = true;
    manualRun = false;
    plotData = true;
    initFlag = true;
    lv_obj_clear_flag(ui_Spinner3, LV_OBJ_FLAG_HIDDEN);
    plotRunningGraphTimer = lv_timer_create(add_data, 1000, NULL);
  }
}

void runManualButtonTriggered(lv_event_t * e)
{
  if (runFlag) {
    lv_obj_add_flag(ui_Spinner3, LV_OBJ_FLAG_HIDDEN);
    plotData = false;
    removeRunningPlot();
    lv_timer_del(plotRunningGraphTimer);
    runFlag = false;
  }
  lv_obj_clear_flag(ui_Spinner4, LV_OBJ_FLAG_HIDDEN);
  manualRun = true;
  if (rpmSetPoint < 0.0) {
    rpmSetPoint = 0.0;
  }
  lv_label_set_text(ui_ManualRPMLabel, String((int)rpmSetPoint).c_str());
  lv_arc_set_value(ui_RpmKnob, (int16_t)rpmSetPoint);
  if (manualRun) {
    Serial.println("T " + String(convertRPMToRads(rpmSetPoint)));
  }
}

void StopButtonTriggered(lv_event_t * e)
{
  if (manualRun || runFlag) {
    Serial.println("T 0");
  }
  if (runFlag) {
    lv_obj_add_flag(ui_Spinner3, LV_OBJ_FLAG_HIDDEN);
    plotData = false;
    removeRunningPlot();
    lv_timer_del(plotRunningGraphTimer);
    runFlag = false;
    initFlag = true;
    rpmSetPoint = 0.0;
  }
  if (manualRun) {
    lv_obj_add_flag(ui_Spinner4, LV_OBJ_FLAG_HIDDEN);
    manualRun = false;
    rpmSetPoint = 0.0;
    lv_label_set_text(ui_ManualRPMLabel, String((int)rpmSetPoint).c_str());
    lv_arc_set_value(ui_RpmKnob, (int16_t)rpmSetPoint);
  }
}

void SetRpmSlider(lv_event_t * e)
{
  if (manualRun) {
    rpmSetPoint = (double)lv_arc_get_value(ui_RpmKnob);
    lv_label_set_text(ui_ManualRPMLabel, String((int)rpmSetPoint).c_str());
    Serial.println("T " + String(convertRPMToRads(rpmSetPoint)));
  }
  else {
    lv_arc_set_value(ui_RpmKnob, 0);
  }
}

void minus50RPM(lv_event_t * e)
{
  if (manualRun) {
    rpmSetPoint -= 50.0;
    if (rpmSetPoint < 0.0) {
      rpmSetPoint = 0.0;
    }
    lv_label_set_text(ui_ManualRPMLabel, String((int)rpmSetPoint).c_str());
    lv_arc_set_value(ui_RpmKnob, (int16_t)rpmSetPoint);
    Serial.println("T " + String(convertRPMToRads(rpmSetPoint)));
  }
}

void add50RPM(lv_event_t * e)
{
  if (manualRun) {
    rpmSetPoint += 50.0;
    if (rpmSetPoint > 2800.0) {
      rpmSetPoint = 2800.0;
    }
    lv_label_set_text(ui_ManualRPMLabel, String((int)rpmSetPoint).c_str());
    lv_arc_set_value(ui_RpmKnob, (int16_t)rpmSetPoint);
    Serial.println("T " + String(convertRPMToRads(rpmSetPoint)));
  }
}
void setMainChart() {
  lv_label_set_text(ui_SelectedProfileNumber1, String("Spin Profile: " + String(savedProfileNumber + 1)).c_str());
  lv_label_set_text(ui_RunMotorProfileLabel, String("Spin Profile: " + String(savedProfileNumber + 1)).c_str());
  for (int i = 0; i < 10; i++) {
    rpm_data[5][i] = (lv_coord_t)profileRPM[savedProfileNumber][i];
    time_data[5][i] = (lv_coord_t)profileTime[savedProfileNumber][i];
    if (i > 0) {
      if (time_data[5][i] < time_data[5][i - 1])
        time_data[5][i] = time_data[5][i - 1];
    }
  }
  lv_chart_series_t * ui_SelectedProfile_series = lv_chart_add_series(ui_SelectedProfile, lv_color_hex(0x808080),
      LV_CHART_AXIS_PRIMARY_Y);
  lv_chart_set_ext_y_array(ui_SelectedProfile , ui_SelectedProfile_series, rpm_data[5]);
  lv_chart_set_ext_x_array(ui_SelectedProfile , ui_SelectedProfile_series, time_data[5]);
  lv_chart_refresh(ui_SelectedProfile );
}
void setRunChart(lv_event_t * e)
{
  for (int i = 0; i < 10; i++) {
    rpm_run[i] = rpm_data[5][i];
    time_run[i] = time_data[5][i];
  }
  lv_chart_series_t * ui_SelectedProfile_series_2 = lv_chart_add_series(ui_RunningProfile, lv_color_hex(0x808080),
      LV_CHART_AXIS_PRIMARY_Y);
  lv_chart_set_ext_y_array(ui_RunningProfile , ui_SelectedProfile_series_2, rpm_run);
  lv_chart_set_ext_x_array(ui_RunningProfile , ui_SelectedProfile_series_2, time_run);
  lv_chart_refresh(ui_RunningProfile );
}

void setSelectedMode(lv_event_t * e) {
  savedProfileNumber = profileNumber;
  prefHelper.storeProfileNumber(savedProfileNumber);
  setMainChart();
}
void setMotorNeedleGauge(float rpm) {
  int angle = map((int)rpm, 0, 4200, 0, 2500);
  lv_img_set_angle(ui_Needle, angle);
  lv_arc_set_value(ui_RedArc, rpm);
  angle = map((int)rpm, 0, 2800, 0, 2500);
  lv_label_set_text(ui_RPMLabel, String(rpm).c_str());
  lv_img_set_angle(ui_Needle1, angle);
  lv_arc_set_value(ui_Arc2, rpm);
  lv_label_set_text(ui_RPMLabel11, String(rpm).c_str());
}

void setupProfileGraphs(lv_event_t * e) {
  //Profile 1
  for (int i = 0; i < 10; i++) {
    rpm_data[0][i] = (lv_coord_t)profileRPM[0][i];
    time_data[0][i] = (lv_coord_t)profileTime[0][i];
    if (i > 0) {
      if (time_data[0][i] < time_data[0][i - 1])
        time_data[0][i] = time_data[0][i - 1];
    }
  }
  lv_chart_series_t * ui_Profile1_series_1 = lv_chart_add_series(ui_Profile1, lv_color_hex(0x808080),
      LV_CHART_AXIS_PRIMARY_Y);
  lv_chart_set_ext_y_array(ui_Profile1 , ui_Profile1_series_1, rpm_data[0]);
  lv_chart_set_ext_x_array(ui_Profile1 , ui_Profile1_series_1, time_data[0]);
  lv_chart_refresh(ui_Profile1);
  //Profile 2
  for (int i = 0; i < 10; i++) {
    rpm_data[1][i] = (lv_coord_t)profileRPM[1][i];
    time_data[1][i] = (lv_coord_t)profileTime[1][i];
    if (i > 0) {
      if (time_data[1][i] < time_data[1][i - 1])
        time_data[1][i] = time_data[1][i - 1];
    }
  }
  lv_chart_series_t * ui_Profile1_series_2 = lv_chart_add_series(ui_Profile2, lv_color_hex(0x808080),
      LV_CHART_AXIS_PRIMARY_Y);
  lv_chart_set_ext_y_array(ui_Profile2 , ui_Profile1_series_2, rpm_data[1]);
  lv_chart_set_ext_x_array(ui_Profile2 , ui_Profile1_series_2, time_data[1]);
  lv_chart_refresh(ui_Profile2 );
  //Profile 3
  for (int i = 0; i < 10; i++) {
    rpm_data[2][i] = (lv_coord_t)profileRPM[2][i];
    time_data[2][i] = (lv_coord_t)profileTime[2][i];
    if (i > 0) {
      if (time_data[2][i] < time_data[2][i - 1])
        time_data[2][i] = time_data[2][i - 1];
    }
  }
  lv_chart_series_t * ui_Profile1_series_3 = lv_chart_add_series(ui_Profile3, lv_color_hex(0x808080),
      LV_CHART_AXIS_PRIMARY_Y);
  lv_chart_set_ext_y_array(ui_Profile3 , ui_Profile1_series_3, rpm_data[2]);
  lv_chart_set_ext_x_array(ui_Profile3 , ui_Profile1_series_3, time_data[2]);
  lv_chart_refresh(ui_Profile3 );
  //Profile 4
  for (int i = 0; i < 10; i++) {
    rpm_data[3][i] = (lv_coord_t)profileRPM[3][i];
    time_data[3][i] = (lv_coord_t)profileTime[3][i];
    if (i > 0) {
      if (time_data[3][i] < time_data[3][i - 1])
        time_data[3][i] = time_data[3][i - 1];
    }
  }
  lv_chart_series_t * ui_Profile1_series_4 = lv_chart_add_series(ui_Profile4, lv_color_hex(0x808080),
      LV_CHART_AXIS_PRIMARY_Y);
  lv_chart_set_ext_y_array(ui_Profile4 , ui_Profile1_series_4, rpm_data[3]);
  lv_chart_set_ext_x_array(ui_Profile4 , ui_Profile1_series_4, time_data[3]);
  lv_chart_refresh(ui_Profile4 );
}
void KeyboardDone(lv_event_t * e)
{
  if (lv_keyboard_get_textarea(ui_Keyboard) == ui_Time1) {
    profileTime[profileNumber][0] = atof(lv_textarea_get_text(ui_Time1));
  }
  if (lv_keyboard_get_textarea(ui_Keyboard) == ui_Time2) {
    profileTime[profileNumber][1] = atof(lv_textarea_get_text(ui_Time2));
  }
  if (lv_keyboard_get_textarea(ui_Keyboard) == ui_Time3) {
    profileTime[profileNumber][2] = atof(lv_textarea_get_text(ui_Time3));
  }
  if (lv_keyboard_get_textarea(ui_Keyboard) == ui_Time4) {
    profileTime[profileNumber][3] = atof(lv_textarea_get_text(ui_Time4));
  }
  if (lv_keyboard_get_textarea(ui_Keyboard) == ui_Time5) {
    profileTime[profileNumber][4] = atof(lv_textarea_get_text(ui_Time5));
  }
  if (lv_keyboard_get_textarea(ui_Keyboard) == ui_Time6) {
    profileTime[profileNumber][5] = atof(lv_textarea_get_text(ui_Time6));
  }
  if (lv_keyboard_get_textarea(ui_Keyboard) == ui_Time7) {
    profileTime[profileNumber][6] = atof(lv_textarea_get_text(ui_Time7));
  }
  if (lv_keyboard_get_textarea(ui_Keyboard) == ui_Time8) {
    profileTime[profileNumber][7] = atof(lv_textarea_get_text(ui_Time8));
  }
  if (lv_keyboard_get_textarea(ui_Keyboard) == ui_Time9) {
    profileTime[profileNumber][8] = atof(lv_textarea_get_text(ui_Time9));
  }
  if (lv_keyboard_get_textarea(ui_Keyboard) == ui_Time10) {
    profileTime[profileNumber][9] = atof(lv_textarea_get_text(ui_Time10));
  }
  if (lv_keyboard_get_textarea(ui_Keyboard) == ui_RPM1) {
    profileRPM[profileNumber][0] = atof(lv_textarea_get_text(ui_RPM1));
  }
  if (lv_keyboard_get_textarea(ui_Keyboard) == ui_RPM2) {
    profileRPM[profileNumber][1] = atof(lv_textarea_get_text(ui_RPM2));
  }
  if (lv_keyboard_get_textarea(ui_Keyboard) == ui_RPM3) {
    profileRPM[profileNumber][2] = atof(lv_textarea_get_text(ui_RPM3));
  }
  if (lv_keyboard_get_textarea(ui_Keyboard) == ui_RPM4) {
    profileRPM[profileNumber][3] = atof(lv_textarea_get_text(ui_RPM4));
  }
  if (lv_keyboard_get_textarea(ui_Keyboard) == ui_RPM5) {
    profileRPM[profileNumber][4] = atof(lv_textarea_get_text(ui_RPM5));
  }
  if (lv_keyboard_get_textarea(ui_Keyboard) == ui_RPM6) {
    profileRPM[profileNumber][5] = atof(lv_textarea_get_text(ui_RPM6));
  }
  if (lv_keyboard_get_textarea(ui_Keyboard) == ui_RPM7) {
    profileRPM[profileNumber][6] = atof(lv_textarea_get_text(ui_RPM7));
  }
  if (lv_keyboard_get_textarea(ui_Keyboard) == ui_RPM8) {
    profileRPM[profileNumber][7] = atof(lv_textarea_get_text(ui_RPM8));
  }
  if (lv_keyboard_get_textarea(ui_Keyboard) == ui_RPM9) {
    profileRPM[profileNumber][8] = atof(lv_textarea_get_text(ui_RPM9));
  }
  if (lv_keyboard_get_textarea(ui_Keyboard) == ui_RPM10) {
    profileRPM[profileNumber][9] = atof(lv_textarea_get_text(ui_RPM10));
  }
  for (int i = 0; i < 10; i++) {
    rpm_data[4][i] = (lv_coord_t)profileRPM[profileNumber][i];
    time_data[4][i] = (lv_coord_t)profileTime[profileNumber][i];
    if (i > 0) {
      if (time_data[4][i] < time_data[4][i - 1])
        time_data[4][i] = time_data[4][i - 1];
    }
  }
  lv_chart_series_t * ui_EditProfile_series_1 = lv_chart_add_series(ui_EditProfile, lv_color_hex(0x808080),
      LV_CHART_AXIS_PRIMARY_Y);
  lv_chart_set_ext_y_array(ui_EditProfile, ui_EditProfile_series_1, rpm_data[4]);
  lv_chart_set_ext_x_array(ui_EditProfile, ui_EditProfile_series_1, time_data[4]);
  lv_chart_refresh(ui_EditProfile);
  prefHelper.storeProfileTime(profileTime);
  prefHelper.storeProfileRPM(profileRPM);
}

#endif
