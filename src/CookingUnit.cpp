#include "CookingUnit.hpp"

CookingUnit::CookingUnit() : temperature(0), cooking_time(0), is_operational(true) {}

void CookingUnit::emergencyShutdown() {
    is_operational = false;
    std::cout << "[ALERT] Overheating detected! Emergency shutdown initiated.\n";
}
