#pragma once

#include "../MathConstants.h"

class Food {
public:
    MathConstants num;
    virtual int HealthChange() = 0 ;
    virtual int HappinessChange() = 0;
    virtual int NeedToiletChange() = 0;
    virtual int SatietyChange() = 0;
    virtual int ForceChange() = 0;
};
