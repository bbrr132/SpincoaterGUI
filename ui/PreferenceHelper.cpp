#include "PreferenceHelper.h"

PreferenceHelper::PreferenceHelper() {
    preferences.begin(NAMESPACE, false); // Open NVS namespace in RW mode
}

PreferenceHelper::~PreferenceHelper() {
    preferences.end(); // Close the NVS namespace
}

void PreferenceHelper::storeProfileTime(double profileTime[4][10]) {
    preferences.begin(NAMESPACE, false);
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 10; ++j) {
            String key = "time_" + String(i) + "_" + String(j);
            preferences.putDouble(key.c_str(), profileTime[i][j]);
        }
    }
    preferences.end();
}

void PreferenceHelper::getProfileTime(double profileTime[4][10]) {
    preferences.begin(NAMESPACE, true);
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 10; ++j) {
            String key = "time_" + String(i) + "_" + String(j);
            profileTime[i][j] = preferences.getDouble(key.c_str(), 0.0);
        }
    }
    preferences.end();
}

void PreferenceHelper::storeProfileRPM(double profileRPM[4][10]) {
    preferences.begin(NAMESPACE, false);
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 10; ++j) {
            String key = "rpm_" + String(i) + "_" + String(j);
            preferences.putDouble(key.c_str(), profileRPM[i][j]);
        }
    }
    preferences.end();
}

void PreferenceHelper::getProfileRPM(double profileRPM[4][10]) {
    preferences.begin(NAMESPACE, true);
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 10; ++j) {
            String key = "rpm_" + String(i) + "_" + String(j);
            profileRPM[i][j] = preferences.getDouble(key.c_str(), 0.0);
        }
    }
    preferences.end();
}

void PreferenceHelper::storeProfileNumber(int profileNumber) {
    preferences.begin(NAMESPACE, false);
    preferences.putInt("profile_number", profileNumber);
    preferences.end();
}

int PreferenceHelper::getProfileNumber() {
    preferences.begin(NAMESPACE, true);
    int profileNumber = preferences.getInt("profile_number", 0);
    preferences.end();
    return profileNumber;
}
