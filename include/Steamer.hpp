#ifndef STEAMER_HPP
#define STEAMER_HPP

#include "CookingUnit.hpp"

class Steamer : public CookingUnit {
public:
    Steamer();
    void startCooking(int quantity) override;
    void regulateTemperature() override;
};

#endif
