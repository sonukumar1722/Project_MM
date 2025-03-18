#include "PaymentSystem.hpp"

bool PaymentSystem::processPayment(const std::string& method, double amount) {
    static std::unordered_map<std::string, bool> validMethods = {
        {"credit", true}, {"debit", true}, {"upi", true}, {"cash", true}
    };

    if (validMethods.find(method) != validMethods.end()) {
        std::cout << "[PAYMENT] Processing " << method << " payment of ₹" << amount << "...\n";
        std::cout << "[PAYMENT] Transaction Successful!\n";
        return true;
    }

    std::cout << "[ERROR] Invalid payment method!\n";
    return false;
}
