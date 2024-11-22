// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: Test

#include "ui.h"

void ui_Screen3_screen_init(void)
{
    ui_Screen3 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_EditProfileScreenPanel1 = lv_obj_create(ui_Screen3);
    lv_obj_set_width(ui_EditProfileScreenPanel1, 480);
    lv_obj_set_height(ui_EditProfileScreenPanel1, 320);
    lv_obj_set_align(ui_EditProfileScreenPanel1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_EditProfileScreenPanel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_EditProfileScreenPanel1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_EditProfileScreenPanel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_EditProfileTopPanel1 = lv_obj_create(ui_EditProfileScreenPanel1);
    lv_obj_set_width(ui_EditProfileTopPanel1, 200);
    lv_obj_set_height(ui_EditProfileTopPanel1, 40);
    lv_obj_set_x(ui_EditProfileTopPanel1, 0);
    lv_obj_set_y(ui_EditProfileTopPanel1, -22);
    lv_obj_set_align(ui_EditProfileTopPanel1, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_EditProfileTopPanel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_border_color(ui_EditProfileTopPanel1, lv_color_hex(0x00FFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_EditProfileTopPanel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_EditProfileTopLabel = lv_label_create(ui_EditProfileTopPanel1);
    lv_obj_set_width(ui_EditProfileTopLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_EditProfileTopLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_EditProfileTopLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_EditProfileTopLabel, "Profile");
    lv_obj_set_style_text_color(ui_EditProfileTopLabel, lv_color_hex(0x00FFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_EditProfileTopLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_EditProfileTopLabel, &ui_font_Display_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_EditProfileBackPanel = lv_obj_create(ui_EditProfileScreenPanel1);
    lv_obj_set_width(ui_EditProfileBackPanel, 89);
    lv_obj_set_height(ui_EditProfileBackPanel, 40);
    lv_obj_set_x(ui_EditProfileBackPanel, -186);
    lv_obj_set_y(ui_EditProfileBackPanel, -23);
    lv_obj_set_align(ui_EditProfileBackPanel, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_EditProfileBackPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_border_color(ui_EditProfileBackPanel, lv_color_hex(0x00FFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_EditProfileBackPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_EditProfileBackLabel = lv_label_create(ui_EditProfileBackPanel);
    lv_obj_set_width(ui_EditProfileBackLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_EditProfileBackLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_EditProfileBackLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_EditProfileBackLabel, "< Back");
    lv_obj_set_style_text_color(ui_EditProfileBackLabel, lv_color_hex(0x00FFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_EditProfileBackLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_EditProfileBackLabel, &ui_font_Display_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_EditProfileSelectPanel = lv_obj_create(ui_EditProfileScreenPanel1);
    lv_obj_set_width(ui_EditProfileSelectPanel, 89);
    lv_obj_set_height(ui_EditProfileSelectPanel, 40);
    lv_obj_set_x(ui_EditProfileSelectPanel, 183);
    lv_obj_set_y(ui_EditProfileSelectPanel, -22);
    lv_obj_set_align(ui_EditProfileSelectPanel, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_EditProfileSelectPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_border_color(ui_EditProfileSelectPanel, lv_color_hex(0x00FFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_EditProfileSelectPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_EditProfileSelectLabel = lv_label_create(ui_EditProfileSelectPanel);
    lv_obj_set_width(ui_EditProfileSelectLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_EditProfileSelectLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_EditProfileSelectLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_EditProfileSelectLabel, "Select");
    lv_obj_set_style_text_color(ui_EditProfileSelectLabel, lv_color_hex(0x00FFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_EditProfileSelectLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_EditProfileSelectLabel, &ui_font_Display_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Keyboard = lv_keyboard_create(ui_Screen3);
    lv_keyboard_set_mode(ui_Keyboard, LV_KEYBOARD_MODE_NUMBER);
    lv_obj_set_width(ui_Keyboard, 480);
    lv_obj_set_height(ui_Keyboard, 120);
    lv_obj_set_x(ui_Keyboard, 0);
    lv_obj_set_y(ui_Keyboard, 95);
    lv_obj_set_align(ui_Keyboard, LV_ALIGN_CENTER);

    ui_PanelForParams = lv_obj_create(ui_Screen3);
    lv_obj_set_width(ui_PanelForParams, 232);
    lv_obj_set_height(ui_PanelForParams, 154);
    lv_obj_set_x(ui_PanelForParams, -115);
    lv_obj_set_y(ui_PanelForParams, -45);
    lv_obj_set_align(ui_PanelForParams, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_PanelForParams, LV_FLEX_FLOW_ROW_WRAP);
    lv_obj_set_flex_align(ui_PanelForParams, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START);
    lv_obj_add_flag(ui_PanelForParams, LV_OBJ_FLAG_SCROLL_ON_FOCUS | LV_OBJ_FLAG_SCROLL_WITH_ARROW);     /// Flags
    lv_obj_clear_flag(ui_PanelForParams,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE);     /// Flags

    ui_TimeLabel1 = lv_label_create(ui_PanelForParams);
    lv_obj_set_width(ui_TimeLabel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TimeLabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_TimeLabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TimeLabel1, "Time 1:");
    lv_obj_set_style_text_font(ui_TimeLabel1, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Time1 = lv_textarea_create(ui_PanelForParams);
    lv_obj_set_width(ui_Time1, 120);
    lv_obj_set_height(ui_Time1, 30);
    lv_obj_set_x(ui_Time1, -31);
    lv_obj_set_y(ui_Time1, -128);
    lv_obj_set_align(ui_Time1, LV_ALIGN_CENTER);
    lv_textarea_set_max_length(ui_Time1, 10);

    lv_obj_set_style_text_font(ui_Time1, &lv_font_montserrat_12, LV_PART_SELECTED | LV_STATE_DEFAULT);


    ui_RPMLabel1 = lv_label_create(ui_PanelForParams);
    lv_obj_set_width(ui_RPMLabel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_RPMLabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_RPMLabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_RPMLabel1, "RPM 1:");
    lv_obj_set_style_text_font(ui_RPMLabel1, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RPM1 = lv_textarea_create(ui_PanelForParams);
    lv_obj_set_width(ui_RPM1, 120);
    lv_obj_set_height(ui_RPM1, 30);
    lv_obj_set_x(ui_RPM1, -31);
    lv_obj_set_y(ui_RPM1, -128);
    lv_obj_set_align(ui_RPM1, LV_ALIGN_CENTER);
    lv_textarea_set_max_length(ui_RPM1, 10);

    lv_obj_set_style_text_font(ui_RPM1, &lv_font_montserrat_12, LV_PART_SELECTED | LV_STATE_DEFAULT);


    ui_TimeLabel2 = lv_label_create(ui_PanelForParams);
    lv_obj_set_width(ui_TimeLabel2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TimeLabel2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_TimeLabel2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TimeLabel2, "Time 2:");
    lv_obj_set_style_text_font(ui_TimeLabel2, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Time2 = lv_textarea_create(ui_PanelForParams);
    lv_obj_set_width(ui_Time2, 120);
    lv_obj_set_height(ui_Time2, 30);
    lv_obj_set_x(ui_Time2, -31);
    lv_obj_set_y(ui_Time2, -128);
    lv_obj_set_align(ui_Time2, LV_ALIGN_CENTER);
    lv_textarea_set_max_length(ui_Time2, 10);

    lv_obj_set_style_text_font(ui_Time2, &lv_font_montserrat_12, LV_PART_SELECTED | LV_STATE_DEFAULT);


    ui_RPMLabel2 = lv_label_create(ui_PanelForParams);
    lv_obj_set_width(ui_RPMLabel2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_RPMLabel2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_RPMLabel2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_RPMLabel2, "RPM 2:");
    lv_obj_set_style_text_font(ui_RPMLabel2, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RPM2 = lv_textarea_create(ui_PanelForParams);
    lv_obj_set_width(ui_RPM2, 120);
    lv_obj_set_height(ui_RPM2, 30);
    lv_obj_set_x(ui_RPM2, -31);
    lv_obj_set_y(ui_RPM2, -128);
    lv_obj_set_align(ui_RPM2, LV_ALIGN_CENTER);
    lv_textarea_set_max_length(ui_RPM2, 10);

    lv_obj_set_style_text_font(ui_RPM2, &lv_font_montserrat_12, LV_PART_SELECTED | LV_STATE_DEFAULT);


    ui_TimeLabel3 = lv_label_create(ui_PanelForParams);
    lv_obj_set_width(ui_TimeLabel3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TimeLabel3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_TimeLabel3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TimeLabel3, "Time 3:");
    lv_obj_set_style_text_font(ui_TimeLabel3, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Time3 = lv_textarea_create(ui_PanelForParams);
    lv_obj_set_width(ui_Time3, 120);
    lv_obj_set_height(ui_Time3, 30);
    lv_obj_set_x(ui_Time3, -31);
    lv_obj_set_y(ui_Time3, -128);
    lv_obj_set_align(ui_Time3, LV_ALIGN_CENTER);
    lv_textarea_set_max_length(ui_Time3, 10);

    lv_obj_set_style_text_font(ui_Time3, &lv_font_montserrat_12, LV_PART_SELECTED | LV_STATE_DEFAULT);


    ui_RPMLabel3 = lv_label_create(ui_PanelForParams);
    lv_obj_set_width(ui_RPMLabel3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_RPMLabel3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_RPMLabel3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_RPMLabel3, "RPM 3:");
    lv_obj_set_style_text_font(ui_RPMLabel3, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RPM3 = lv_textarea_create(ui_PanelForParams);
    lv_obj_set_width(ui_RPM3, 120);
    lv_obj_set_height(ui_RPM3, 30);
    lv_obj_set_x(ui_RPM3, -31);
    lv_obj_set_y(ui_RPM3, -128);
    lv_obj_set_align(ui_RPM3, LV_ALIGN_CENTER);
    lv_textarea_set_max_length(ui_RPM3, 10);

    lv_obj_set_style_text_font(ui_RPM3, &lv_font_montserrat_12, LV_PART_SELECTED | LV_STATE_DEFAULT);


    ui_TimeLabel4 = lv_label_create(ui_PanelForParams);
    lv_obj_set_width(ui_TimeLabel4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TimeLabel4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_TimeLabel4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TimeLabel4, "Time 4:");
    lv_obj_set_style_text_font(ui_TimeLabel4, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Time4 = lv_textarea_create(ui_PanelForParams);
    lv_obj_set_width(ui_Time4, 120);
    lv_obj_set_height(ui_Time4, 30);
    lv_obj_set_x(ui_Time4, -31);
    lv_obj_set_y(ui_Time4, -128);
    lv_obj_set_align(ui_Time4, LV_ALIGN_CENTER);
    lv_textarea_set_max_length(ui_Time4, 10);

    lv_obj_set_style_text_font(ui_Time4, &lv_font_montserrat_12, LV_PART_SELECTED | LV_STATE_DEFAULT);


    ui_RPMLabel4 = lv_label_create(ui_PanelForParams);
    lv_obj_set_width(ui_RPMLabel4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_RPMLabel4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_RPMLabel4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_RPMLabel4, "RPM 4:");
    lv_obj_set_style_text_font(ui_RPMLabel4, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RPM4 = lv_textarea_create(ui_PanelForParams);
    lv_obj_set_width(ui_RPM4, 120);
    lv_obj_set_height(ui_RPM4, 30);
    lv_obj_set_x(ui_RPM4, -31);
    lv_obj_set_y(ui_RPM4, -128);
    lv_obj_set_align(ui_RPM4, LV_ALIGN_CENTER);
    lv_textarea_set_max_length(ui_RPM4, 10);

    lv_obj_set_style_text_font(ui_RPM4, &lv_font_montserrat_12, LV_PART_SELECTED | LV_STATE_DEFAULT);


    ui_TimeLabel5 = lv_label_create(ui_PanelForParams);
    lv_obj_set_width(ui_TimeLabel5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TimeLabel5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_TimeLabel5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TimeLabel5, "Time 5:");
    lv_obj_set_style_text_font(ui_TimeLabel5, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Time5 = lv_textarea_create(ui_PanelForParams);
    lv_obj_set_width(ui_Time5, 120);
    lv_obj_set_height(ui_Time5, 30);
    lv_obj_set_x(ui_Time5, -31);
    lv_obj_set_y(ui_Time5, -128);
    lv_obj_set_align(ui_Time5, LV_ALIGN_CENTER);
    lv_textarea_set_max_length(ui_Time5, 10);

    lv_obj_set_style_text_font(ui_Time5, &lv_font_montserrat_12, LV_PART_SELECTED | LV_STATE_DEFAULT);


    ui_RPMLabel5 = lv_label_create(ui_PanelForParams);
    lv_obj_set_width(ui_RPMLabel5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_RPMLabel5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_RPMLabel5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_RPMLabel5, "RPM 5:");
    lv_obj_set_style_text_font(ui_RPMLabel5, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RPM5 = lv_textarea_create(ui_PanelForParams);
    lv_obj_set_width(ui_RPM5, 120);
    lv_obj_set_height(ui_RPM5, 30);
    lv_obj_set_x(ui_RPM5, -31);
    lv_obj_set_y(ui_RPM5, -128);
    lv_obj_set_align(ui_RPM5, LV_ALIGN_CENTER);
    lv_textarea_set_max_length(ui_RPM5, 10);

    lv_obj_set_style_text_font(ui_RPM5, &lv_font_montserrat_12, LV_PART_SELECTED | LV_STATE_DEFAULT);


    ui_TimeLabel6 = lv_label_create(ui_PanelForParams);
    lv_obj_set_width(ui_TimeLabel6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TimeLabel6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_TimeLabel6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TimeLabel6, "Time 6:");
    lv_obj_set_style_text_font(ui_TimeLabel6, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Time6 = lv_textarea_create(ui_PanelForParams);
    lv_obj_set_width(ui_Time6, 120);
    lv_obj_set_height(ui_Time6, 30);
    lv_obj_set_x(ui_Time6, -31);
    lv_obj_set_y(ui_Time6, -128);
    lv_obj_set_align(ui_Time6, LV_ALIGN_CENTER);
    lv_textarea_set_max_length(ui_Time6, 10);

    lv_obj_set_style_text_font(ui_Time6, &lv_font_montserrat_12, LV_PART_SELECTED | LV_STATE_DEFAULT);


    ui_RPMLabel6 = lv_label_create(ui_PanelForParams);
    lv_obj_set_width(ui_RPMLabel6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_RPMLabel6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_RPMLabel6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_RPMLabel6, "RPM 6:");
    lv_obj_set_style_text_font(ui_RPMLabel6, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RPM6 = lv_textarea_create(ui_PanelForParams);
    lv_obj_set_width(ui_RPM6, 120);
    lv_obj_set_height(ui_RPM6, 30);
    lv_obj_set_x(ui_RPM6, -31);
    lv_obj_set_y(ui_RPM6, -128);
    lv_obj_set_align(ui_RPM6, LV_ALIGN_CENTER);
    lv_textarea_set_max_length(ui_RPM6, 10);

    lv_obj_set_style_text_font(ui_RPM6, &lv_font_montserrat_12, LV_PART_SELECTED | LV_STATE_DEFAULT);


    ui_TimeLabel7 = lv_label_create(ui_PanelForParams);
    lv_obj_set_width(ui_TimeLabel7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TimeLabel7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_TimeLabel7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TimeLabel7, "Time 7:");
    lv_obj_set_style_text_font(ui_TimeLabel7, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Time7 = lv_textarea_create(ui_PanelForParams);
    lv_obj_set_width(ui_Time7, 120);
    lv_obj_set_height(ui_Time7, 30);
    lv_obj_set_x(ui_Time7, -31);
    lv_obj_set_y(ui_Time7, -128);
    lv_obj_set_align(ui_Time7, LV_ALIGN_CENTER);
    lv_textarea_set_max_length(ui_Time7, 10);

    lv_obj_set_style_text_font(ui_Time7, &lv_font_montserrat_12, LV_PART_SELECTED | LV_STATE_DEFAULT);


    ui_RPMLabel7 = lv_label_create(ui_PanelForParams);
    lv_obj_set_width(ui_RPMLabel7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_RPMLabel7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_RPMLabel7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_RPMLabel7, "RPM 7:");
    lv_obj_set_style_text_font(ui_RPMLabel7, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RPM7 = lv_textarea_create(ui_PanelForParams);
    lv_obj_set_width(ui_RPM7, 120);
    lv_obj_set_height(ui_RPM7, 30);
    lv_obj_set_x(ui_RPM7, -31);
    lv_obj_set_y(ui_RPM7, -128);
    lv_obj_set_align(ui_RPM7, LV_ALIGN_CENTER);
    lv_textarea_set_max_length(ui_RPM7, 10);

    lv_obj_set_style_text_font(ui_RPM7, &lv_font_montserrat_12, LV_PART_SELECTED | LV_STATE_DEFAULT);


    ui_TimeLabel8 = lv_label_create(ui_PanelForParams);
    lv_obj_set_width(ui_TimeLabel8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TimeLabel8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_TimeLabel8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TimeLabel8, "Time 8:");
    lv_obj_set_style_text_font(ui_TimeLabel8, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Time8 = lv_textarea_create(ui_PanelForParams);
    lv_obj_set_width(ui_Time8, 120);
    lv_obj_set_height(ui_Time8, 30);
    lv_obj_set_x(ui_Time8, -31);
    lv_obj_set_y(ui_Time8, -128);
    lv_obj_set_align(ui_Time8, LV_ALIGN_CENTER);
    lv_textarea_set_max_length(ui_Time8, 10);

    lv_obj_set_style_text_font(ui_Time8, &lv_font_montserrat_12, LV_PART_SELECTED | LV_STATE_DEFAULT);


    ui_RPMLabel8 = lv_label_create(ui_PanelForParams);
    lv_obj_set_width(ui_RPMLabel8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_RPMLabel8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_RPMLabel8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_RPMLabel8, "RPM 8:");
    lv_obj_set_style_text_font(ui_RPMLabel8, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RPM8 = lv_textarea_create(ui_PanelForParams);
    lv_obj_set_width(ui_RPM8, 120);
    lv_obj_set_height(ui_RPM8, 30);
    lv_obj_set_x(ui_RPM8, -31);
    lv_obj_set_y(ui_RPM8, -128);
    lv_obj_set_align(ui_RPM8, LV_ALIGN_CENTER);
    lv_textarea_set_max_length(ui_RPM8, 10);

    lv_obj_set_style_text_font(ui_RPM8, &lv_font_montserrat_12, LV_PART_SELECTED | LV_STATE_DEFAULT);


    ui_TimeLabel9 = lv_label_create(ui_PanelForParams);
    lv_obj_set_width(ui_TimeLabel9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TimeLabel9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_TimeLabel9, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TimeLabel9, "Time 9:");
    lv_obj_set_style_text_font(ui_TimeLabel9, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Time9 = lv_textarea_create(ui_PanelForParams);
    lv_obj_set_width(ui_Time9, 120);
    lv_obj_set_height(ui_Time9, 30);
    lv_obj_set_x(ui_Time9, -31);
    lv_obj_set_y(ui_Time9, -128);
    lv_obj_set_align(ui_Time9, LV_ALIGN_CENTER);
    lv_textarea_set_max_length(ui_Time9, 10);

    lv_obj_set_style_text_font(ui_Time9, &lv_font_montserrat_12, LV_PART_SELECTED | LV_STATE_DEFAULT);


    ui_RPMLabel9 = lv_label_create(ui_PanelForParams);
    lv_obj_set_width(ui_RPMLabel9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_RPMLabel9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_RPMLabel9, LV_ALIGN_CENTER);
    lv_label_set_text(ui_RPMLabel9, "RPM 9:");
    lv_obj_set_style_text_font(ui_RPMLabel9, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RPM9 = lv_textarea_create(ui_PanelForParams);
    lv_obj_set_width(ui_RPM9, 120);
    lv_obj_set_height(ui_RPM9, 30);
    lv_obj_set_x(ui_RPM9, -31);
    lv_obj_set_y(ui_RPM9, -128);
    lv_obj_set_align(ui_RPM9, LV_ALIGN_CENTER);
    lv_textarea_set_max_length(ui_RPM9, 10);

    lv_obj_set_style_text_font(ui_RPM9, &lv_font_montserrat_12, LV_PART_SELECTED | LV_STATE_DEFAULT);


    ui_TimeLabel10 = lv_label_create(ui_PanelForParams);
    lv_obj_set_width(ui_TimeLabel10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TimeLabel10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_TimeLabel10, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TimeLabel10, "Time 10:");
    lv_obj_set_style_text_font(ui_TimeLabel10, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Time10 = lv_textarea_create(ui_PanelForParams);
    lv_obj_set_width(ui_Time10, 120);
    lv_obj_set_height(ui_Time10, 30);
    lv_obj_set_x(ui_Time10, -31);
    lv_obj_set_y(ui_Time10, -128);
    lv_obj_set_align(ui_Time10, LV_ALIGN_CENTER);
    lv_textarea_set_max_length(ui_Time10, 10);

    lv_obj_set_style_text_font(ui_Time10, &lv_font_montserrat_12, LV_PART_SELECTED | LV_STATE_DEFAULT);


    ui_RPMLabel10 = lv_label_create(ui_PanelForParams);
    lv_obj_set_width(ui_RPMLabel10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_RPMLabel10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_RPMLabel10, LV_ALIGN_CENTER);
    lv_label_set_text(ui_RPMLabel10, "RPM 10:");
    lv_obj_set_style_text_font(ui_RPMLabel10, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RPM10 = lv_textarea_create(ui_PanelForParams);
    lv_obj_set_width(ui_RPM10, 120);
    lv_obj_set_height(ui_RPM10, 30);
    lv_obj_set_x(ui_RPM10, -31);
    lv_obj_set_y(ui_RPM10, -128);
    lv_obj_set_align(ui_RPM10, LV_ALIGN_CENTER);

    lv_obj_set_style_text_font(ui_RPM10, &lv_font_montserrat_12, LV_PART_SELECTED | LV_STATE_DEFAULT);


    ui_EditProfile = lv_chart_create(ui_Screen3);
    lv_obj_set_width(ui_EditProfile, 180);
    lv_obj_set_height(ui_EditProfile, 134);
    lv_obj_set_x(ui_EditProfile, 140);
    lv_obj_set_y(ui_EditProfile, 41);
    lv_obj_set_align(ui_EditProfile, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_EditProfile, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CLICK_FOCUSABLE);      /// Flags
    lv_chart_set_type(ui_EditProfile, LV_CHART_TYPE_SCATTER);
    lv_chart_set_range(ui_EditProfile, LV_CHART_AXIS_PRIMARY_Y, 0, 4000);
    lv_chart_set_range(ui_EditProfile, LV_CHART_AXIS_SECONDARY_Y, 0, 300);
    lv_chart_set_div_line_count(ui_EditProfile, 10, 10);
    lv_chart_set_axis_tick(ui_EditProfile, LV_CHART_AXIS_PRIMARY_X, 0, 1, 10, 1, true, 50);
    lv_chart_set_axis_tick(ui_EditProfile, LV_CHART_AXIS_PRIMARY_Y, 0, 5, 5, 2, true, 50);
    lv_chart_set_axis_tick(ui_EditProfile, LV_CHART_AXIS_SECONDARY_Y, 0, 0, 0, 0, false, 25);



    lv_obj_add_event_cb(ui_EditProfileBackPanel, ui_event_EditProfileBackPanel, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_EditProfileSelectPanel, ui_event_EditProfileSelectPanel, LV_EVENT_ALL, NULL);
    lv_keyboard_set_textarea(ui_Keyboard, ui_Time1);
    lv_obj_add_event_cb(ui_Keyboard, ui_event_Keyboard, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Time1, ui_event_Time1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_RPM1, ui_event_RPM1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Time2, ui_event_Time2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_RPM2, ui_event_RPM2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Time3, ui_event_Time3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_RPM3, ui_event_RPM3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Time4, ui_event_Time4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_RPM4, ui_event_RPM4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Time5, ui_event_Time5, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_RPM5, ui_event_RPM5, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Time6, ui_event_Time6, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_RPM6, ui_event_RPM6, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Time7, ui_event_Time7, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_RPM7, ui_event_RPM7, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Time8, ui_event_Time8, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_RPM8, ui_event_RPM8, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Time9, ui_event_Time9, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_RPM9, ui_event_RPM9, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Time10, ui_event_Time10, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_RPM10, ui_event_RPM10, LV_EVENT_ALL, NULL);
    uic_Time1 = ui_Time1;

}
