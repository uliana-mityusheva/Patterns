#pragma once

#include "Food.h"

class Salad: Food {
public:
    Salad() = default;

    int HappinessChange() override;
    int HealthChange() override;
    int NeedToiletChange() override;
    int SatietyChange() override;
    int ForceChange() override;
};
