#ifndef SECURITY_POWER_MANAGEMENT_HPP
#define SECURITY_POWER_MANAGEMENT_HPP

#include <iostream>
#include <string>

class SecuritySystem {
public:
    void enableSurveillance();
    void detectUnauthorizedAccess();
    void triggerAlarm();
};

class PowerManagement {
private:
    int batteryLevel;
    bool isPowerSavingMode;

public:
    PowerManagement();
    void monitorBattery();
    void activatePowerSaving();
    void shutdownNonEssentialSystems();
};

#endif // SECURITY_POWER_MANAGEMENT_HPP
