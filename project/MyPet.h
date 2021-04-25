#pragma once

#include <iostream>

#include "Food/Apple.h"
#include "Food/Pancake.h"
#include "Food/Salad.h"
#include "Food/Poke.h"
#include "Food/Hamburger.h"
#include "Food/Chips.h"

#include "Toy/ComputerGame.h"
#include "Toy/Puzzle.h"
#include "Toy/Ball.h"

#include "MathConstants.h"
#include "StringConstants.h"

class MyPet{
protected:
    MathConstants num;
    StringConstants str;
    int health;
    int happiness;
    int sleep;
    int satiety;
    int force;
    int need_toilet;

    void CheckStatus(int &status);
    void CheckAllStatus();

public:
    std::string name;

    MyPet();

    std::string CheckStatus();
    void CheckAlive();

    void Feed();
    void GoSleep();
    void Play();
    void GoToilet();
    void Sport();
    void Treatment();
    void PrintParameters();

};
