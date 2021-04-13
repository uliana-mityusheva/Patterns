#pragma once

#include "../MathConstants.h"

class Toy {
public:
    MathConstants num;

    virtual int happiness_change() = 0;
    virtual int force_change() = 0;
    virtual int satiety_change () = 0;
    virtual int sleep_change() = 0;
};




