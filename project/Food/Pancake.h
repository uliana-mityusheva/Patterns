#pragma once

#include "Food.h"

class Pancake: Food {
public:
    Pancake() = default;

    int HappinessChange() override;
    int HealthChange() override;
    int NeedToiletChange() override;
    int SatietyChange() override;
    int ForceChange() override;
};
