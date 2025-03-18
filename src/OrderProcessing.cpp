#include "OrderProcessing.hpp"

void processOrder(const std::string& momo_type, int quantity) {
    if (momo_type == "steamed") {
        Steamer steamer;
        steamer.startCooking(quantity);
    } else if (momo_type == "fried") {
        AirFryer airFryer;
        airFryer.startCooking(quantity);
    } else {
        std::cout << "[ERROR] Invalid momo type.\n";
    }
}
