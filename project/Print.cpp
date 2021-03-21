#include "Print.h"

void Print::Hello() {
    std::cout << "Hello, let's start the game!\n" << "Come up with a name for your pet\n";
}

void Print::Start(std::string name) {
    std::cout << "Ok, now you can play with " << name << "\n";
}

void Print::ChooseFood(std::string name) {
    std::cout << "Choose meal for " << name << "\n";
    std::cout << "apple\tpoke\tpancake\tchips\tsalad\thamburger\n";
}

void Print::ChooseToy(std::string name) {
    std::cout << "Choose toy for " << name << "\n";
    std::cout << "ball\tcomputer\tpuzzle\n";
}

void Print::Error() {
    std::cout << "Wrong command\n";
}

void Print::PrintParameter(int parameter, int max) {
    if (parameter == 0) {
        std::cout << zero;
    } else if (parameter == 1 * max / 10) {
        std::cout << one;
    } else if (parameter == 2 * max / 10) {
        std::cout << two;
    } else if (parameter == 3 * max / 10) {
        std::cout << three;
    } else if (parameter == 4 * max / 10) {
        std::cout << four;
    } else if (parameter == 5 * max / 10) {
        std::cout << five;
    } else if (parameter == 6 * max / 10) {
        std::cout << six;
    } else if (parameter == 7 * max / 10) {
        std::cout << seven;
    } else if (parameter == 8 * max / 10) {
        std::cout << eight;
    } else if (parameter == 9 * max / 10) {
        std::cout << nine;
    } else if (parameter == max){
        std::cout << ten;
    } else {
        std::cout << "error";
    }
}

void Print::PrintForce() {
    std::cout << "Force:       ";
}

void Print::PrintHappiness() {
    std::cout << "Happiness:   ";
}

void Print::PrintHealth() {
    std::cout <<"Health:      ";
}

void Print::PrintSatiety() {
    std::cout << "Satiety:     ";
}

void Print::PrintNeedToilet() {
    std::cout << "Need toilet: ";
}

void Print::PrintSleep() {
    std::cout << "Sleep:       ";
}

void Print::ForceToSport(std::string name) {
    std::cout << name << " doesn't have enough forces to play sports\n";
}

void Print::ForceToTreatment(std::string name) {
    std::cout << name << " need more forces to treatment\n";
}

void Print::SleepToTreatment(std::string name) {
    std::cout << name << " need more sleep to treatment\n";
}

void Print::Died(std::string name) {
    std::cout << "Unfortunately " << name << " died :(\n";
}

void Print::End() {
    std::cout << "Thanks for playing\n";
}

void Print::Sick(std::string name) {
    std::cout << name << " is sick\n";
}

void Print::NeedToilet(std::string name) {
    std::cout << name << " needs to go to the toilet\n";
}

void Print::Boring(std::string name){
    std::cout << name << " is bored\n";
}

void Print::Hungry(std::string name) {
    std::cout << name << " is hungry\n";
}

void Print::Sleep(std::string name) {
    std::cout << name << " wants to sleep\n";
}

void Print::Tired(std::string name) {
    std::cout << name << " is tired\n";
}

void Print::Computer(std::string name) {
    std::cout << name << " played a computer game\n";
}

void Print::Ball(std::string name) {
    std::cout << name << " played a ball\n";
}

void Print::Puzzle(std::string name) {
    std::cout << name << " played a puzzle\n";
}

void Print::Apple(std::string name) {
    std::cout << name << " ate the apple\n";
}

void Print::Poke(std::string name) {
    std::cout << name << " ate the poke\n";
}

void Print::Chips(std::string name) {
    std::cout << name << " ate the chips\n";
}

void Print::Hamburger(std::string name) {
    std::cout << name << " ate the hamburger\n";
}

void Print::Pancake(std::string name) {
    std::cout << name << " ate the pancake\n";
}

void Print::Salad(std::string name) {
    std::cout << name << " ate the salad\n";
}

void Print::Toilet(std::string name) {
    std::cout << name << " went to the toilet\n";
}

void Print::GoSleep(std::string name) {
    std::cout << name << " slept\n";
}

void Print::Treatment(std::string name) {
    std::cout << name << " recovered\n";
}

void Print::Sport(std::string name) {
    std::cout << name << " did some sports\n";
}