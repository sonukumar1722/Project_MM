#include "SecurityPowerManagement.hpp"
#include "OrderProcessing.hpp"
#include "PaymentSystem.hpp"

int main() {
    SecuritySystem security;
    PowerManagement power;
    PaymentSystem paymentSystem;

    // Sample Order 1: Fried momos
    std::cout << "Processing an order for 5 fried momos...\n";
    if (paymentSystem.processPayment("upi", 150.0)) {
        processOrder("fried", 5);
    }

    // Sample Order 2: Steamed momos
    std::cout << "\nProcessing an order for 3 steamed momos...\n";
    if (paymentSystem.processPayment("credit", 90.0)) {
        processOrder("steamed", 3);
    }


    security.enableSurveillance();
    security.detectUnauthorizedAccess();
    security.triggerAlarm();

    power.monitorBattery();
    power.activatePowerSaving();
    power.shutdownNonEssentialSystems();

    return 0;
}
