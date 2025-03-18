#include "AirFryer.hpp"

AirFryer::AirFryer() {
    temperature = 180;  // Standard air frying temperature in Celsius
}

void AirFryer::startCooking(int quantity) {
    if (!is_operational) {
        std::cout << "[ERROR] Air Fryer is not operational.\n";
        return;
    }

    cooking_time = 7 + (quantity * 0.5);
    std::cout << "[AIR FRYER] Cooking " << quantity << " momos. Estimated time: " 
              << cooking_time << " mins.\n";

    std::this_thread::sleep_for(std::chrono::seconds(cooking_time));
    std::cout << "[AIR FRYER] Momos are crispy and ready!\n";
}

void AirFryer::regulateTemperature() {
    if (temperature > 200) {
        std::cout << "[AIR FRYER] Overheating detected! Adjusting temperature.\n";
        temperature = 180;
    }
}
