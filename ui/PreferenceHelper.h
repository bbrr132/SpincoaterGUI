#ifndef PREFERENCEHELPER_H
#define PREFERENCEHELPER_H

#include <Preferences.h>

class PreferenceHelper {
public:
    PreferenceHelper();
    ~PreferenceHelper();

    void storeProfileTime(double profileTime[4][10]);
    void getProfileTime(double profileTime[4][10]);

    void storeProfileRPM(double profileRPM[4][10]);
    void getProfileRPM(double profileRPM[4][10]);

    void storeProfileNumber(int profileNumber);
    int getProfileNumber();

private:
    Preferences preferences;
    const char* NAMESPACE = "profile_data";
};

#endif // PREFERENCEHELPER_H
