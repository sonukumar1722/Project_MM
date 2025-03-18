#ifndef AIRFRYER_HPP
#define AIRFRYER_HPP

#include "CookingUnit.hpp"

class AirFryer : public CookingUnit {
public:
    AirFryer();
    void startCooking(int quantity) override;
    void regulateTemperature() override;
};

#endif
