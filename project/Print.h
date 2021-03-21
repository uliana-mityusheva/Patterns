#pragma once

#include <iostream>
#include "MyPet.h"

class Print {
private:
    const std::string zero = "| | | | | | | | | | |\n";
    const std::string one = "|*| | | | | | | | | |\n";
    const std::string two = "|*|*| | | | | | | | |\n";
    const std::string three = "|*|*|*| | | | | | | |\n";
    const std::string four = "|*|*|*|*| | | | | | |\n";
    const std::string five = "|*|*|*|*|*| | | | | |\n";
    const std::string six = "|*|*|*|*|*|*| | | | |\n";
    const std::string seven = "|*|*|*|*|*|*|*| | | |\n";
    const std::string eight = "|*|*|*|*|*|*|*|*| | |\n";
    const std::string nine = "|*|*|*|*|*|*|*|*|*| |\n";
    const std::string ten = "|*|*|*|*|*|*|*|*|*|*|\n";
public:
    void Hello();
    void Start(std::string name);
    void ChooseFood(std::string name);
    void ChooseToy(std::string name);
    void Error();

    void PrintParameter(int parameter, int max);

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
    void NeedToilet(std::string name);
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
};



