#pragma once

#include <iostream>
#include <string>
#include <unistd.h>
#include <vector>

#include "Publish.h"
#include "MyPet.h"


class Print {
private:
    MathConstants num;
    StringConstants str;
    Publish print;

    int Number(int parameter);

    std::vector<std::string> table;

public:
    Print();

    void Hello();
    void Start(std::string name);
    void ChooseFood(std::string name);
    void ChooseToy(std::string name);
    void Error();

    void PrintParameter(int parameter);

    void PrintHappiness();
    void PrintSleep();
    void PrintNeedToilet();
    void PrintHealth();
    void PrintForce();
    void PrintSatiety();

    void ForceToSport(std::string name);
    void ForceToTreatment(std::string name);
    void SleepToTreatment(std::string name);
    void Died(std::string name);
    void End();

    void Sick(std::string name);
    void GoToilet(std::string name);
    void Boring(std::string name);
    void Hungry(std::string name);
    void Sleep(std::string name);
    void Tired(std::string name);

    void Computer(std::string name);
    void Ball(std::string name);
    void Puzzle(std::string name);

    void Poke(std::string name);
    void Pancake(std::string name);
    void Salad(std::string name);
    void Hamburger(std::string name);
    void Apple(std::string name);
    void Chips(std::string name);

    void Toilet(std::string name);
    void Sport(std::string name);
    void Treatment(std::string name);
    void GoSleep(std::string name);
    void Process(std::string name, std::string str);
    void Clock();
};
