#ifndef PAYMENTSYSTEM_HPP
#define PAYMENTSYSTEM_HPP

#include <iostream>
#include <unordered_map>

class PaymentSystem {
public:
    bool processPayment(const std::string& method, double amount);
};

#endif
