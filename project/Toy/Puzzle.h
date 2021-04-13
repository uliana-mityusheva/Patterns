#pragma once

#include "Toy.h"

class Puzzle : public Toy {
public:
    Puzzle() = default;

    int happiness_change() override;
    int force_change() override;
    int satiety_change () override;
    int sleep_change() override;
};

