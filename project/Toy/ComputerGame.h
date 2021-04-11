#pragma once

#include "Toy.h"

class ComputerGame : public Toy {
public:
    ComputerGame() = default;

    int happiness_change() override;
    int force_change() override;
    int satiety_change () override;
    int sleep_change() override;

    int healthy_change();
};

