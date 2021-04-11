#pragma once

#include "Food.h"

class Apple: Food {
public:
    Apple() = default;

    int HappinessChange() override;
    int HealthChange() override;
    int NeedToiletChange() override;
    int SatietyChange() override;
    int ForceChange() override;
};

