#ifndef COOKINGUNIT_HPP
#define COOKINGUNIT_HPP

#include <iostream>
#include <thread>
#include <chrono>

class CookingUnit {
protected:
    int temperature;
    int cooking_time;
    bool is_operational;

public:
    CookingUnit();
    virtual void startCooking(int quantity) = 0;
    virtual void regulateTemperature() = 0;
    virtual void emergencyShutdown();
    virtual ~CookingUnit() {}
};

#endif
