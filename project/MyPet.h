#pragma once

#include <iostream>
#include "Food.h"
#include "Toy.h"
#include "Print.h"

class MyPet{
protected:
    int const max_status = 10;
    int const min_status = 0;

    int health;
    int happiness;
    int sleep;
    int satiety;
    int force;
    int need_toilet;

    void CheckStatus(int &status);
public:
    std::string name;

    MyPet();
    std::string CheckAlive();

    void Feed();
    void GoSleep();
    void Play();
    void GoToilet();
    void Sport();
    void Treatment();
    void PrintParameters() const;

};