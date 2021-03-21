#include "Food.h"
//переделать на max_status * x, в методах в качестве аргумента передавать max_status, min_status
int Apple::HappinessChange(int max, int min) {
    return 1 * max / 10;
}

int Apple::SatietyChange(int max, int min) {
    return 1 * max / 10;
}

int Apple::NeedToiletChange(int max, int min) {
    return 1 * max / 10;
}

int Apple::HealthChange(int max, int min) {
    return 1 * max / 10;
}

int Apple::ForceChange(int max, int min) {
    return min;
}

int Salad::HappinessChange(int max, int min) {
    return 2 * max / 10;
}

int Salad::SatietyChange(int max, int min) {
    return 3 * max / 10;
}

int Salad::NeedToiletChange(int max, int min) {
    return 2 * max / 10;
}

int Salad::HealthChange(int max, int min) {
    return 2 * max / 10;
}

int Salad::ForceChange(int max, int min) {
    return 2 * max / 10;
}

int Poke::HappinessChange(int max, int min) {
    return 2 * max / 10;
}

int Poke::SatietyChange(int max, int min) {
    return 5 * max / 10;
}

int Poke::NeedToiletChange(int max, int min) {
    return 3 * max / 10;
}

int Poke::HealthChange(int max, int min) {
    return 4 * max / 10;
}

int Poke::ForceChange(int max, int min) {
    return 4 * max / 10;
}

int Chips::HappinessChange(int max, int min) {
    return 3 * max / 10;
}

int Chips::SatietyChange(int max, int min) {
    return 2 * max / 10;
}

int Chips::NeedToiletChange(int max, int min) {
    return 3 * max / 10;
}

int Chips::HealthChange(int max, int min) {
    return -2 * max / 10;
}

int Chips::ForceChange(int max, int min) {
    return 2 * max / 10;
}

int Pancake::HappinessChange(int max, int min) {
    return 3 * max / 10;
}

int Pancake::SatietyChange(int max, int min) {
    return 2 * max / 10;
}

int Pancake::NeedToiletChange(int max, int min) {
    return 2 * max / 10;
}

int Pancake::HealthChange(int max, int min) {
    return -1 * max / 10;
}

int Pancake::ForceChange(int max, int min) {
    return 1 * max / 10;
}

int Hamburger::HappinessChange(int max, int min) {
    return 5 * max / 10;
}

int Hamburger::SatietyChange(int max, int min) {
    return 8 * max / 10;
}

int Hamburger::NeedToiletChange(int max, int min) {
    return 6 * max / 10;
}

int Hamburger::HealthChange(int max, int min) {
    return -4 * max / 10;
}

int Hamburger::ForceChange(int max, int min) {
    return 6 * max / 10;
}
