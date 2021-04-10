#pragma once

#include "Food.h"

class Hamburger: Food {
public:
    Hamburger() = default;

    int HappinessChange() override;
    int HealthChange() override;
    int NeedToiletChange() override;
    int SatietyChange() override;
    int ForceChange() override;
};
