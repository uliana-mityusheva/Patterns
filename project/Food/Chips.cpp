#include "Chips.h"

int Chips::HappinessChange() {
    return num.thirty_percent;
}

int Chips::SatietyChange() {
    return num.twenty_percent;
}

int Chips::NeedToiletChange() {
    return num.thirty_percent;
}

int Chips::HealthChange() {
    return -num.twenty_percent;
}

int Chips::ForceChange() {
    return num.twenty_percent;
}