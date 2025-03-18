#include "SecurityPowerManagement.hpp"

// Security System Methods
void SecuritySystem::enableSurveillance() {
    std::cout << "[SECURITY] Surveillance cameras activated.\n";
}

void SecuritySystem::detectUnauthorizedAccess() {
    std::cout << "[SECURITY] Unauthorized access detected! Verifying identity...\n";
}

void SecuritySystem::triggerAlarm() {
    std::cout << "[SECURITY] Alarm triggered! Immediate action required!\n";
}

// Power Management Methods
PowerManagement::PowerManagement() : batteryLevel(100), isPowerSavingMode(false) {}

void PowerManagement::monitorBattery() {
    std::cout << "[POWER] Battery level: " << batteryLevel << "%\n";
    if (batteryLevel < 20) {
        std::cout << "[POWER] Low battery detected! Consider activating power-saving mode.\n";
    }
}

void PowerManagement::activatePowerSaving() {
    isPowerSavingMode = true;
    std::cout << "[POWER] Power-saving mode activated. Reducing non-essential functions.\n";
}

void PowerManagement::shutdownNonEssentialSystems() {
    std::cout << "[POWER] Shutting down non-essential systems to conserve energy.\n";
}
