#include "Steamer.hpp"

Steamer::Steamer() {
    temperature = 100;  // Standard steaming temperature in Celsius
}

void Steamer::startCooking(int quantity) {
    if (!is_operational) {
        std::cout << "[ERROR] Steamer is not operational.\n";
        return;
    }

    cooking_time = 5 + (quantity * 0.5);
    std::cout << "[STEAMER] Cooking " << quantity << " momos. Estimated time: " 
              << cooking_time << " mins.\n";

    std::this_thread::sleep_for(std::chrono::seconds(cooking_time));
    std::cout << "[STEAMER] Momos are ready!\n";
}

void Steamer::regulateTemperature() {
    if (temperature > 110) {
        std::cout << "[STEAMER] Overheating detected! Adjusting temperature.\n";
        temperature = 100;
    }
}
