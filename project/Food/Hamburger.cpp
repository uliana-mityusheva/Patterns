#include "Hamburger.h"

int Hamburger::HappinessChange() {
    return num.fifty_percent;
}

int Hamburger::SatietyChange() {
    return num.eighty_percent;
}

int Hamburger::NeedToiletChange() {
    return num.sixty_percent;
}

int Hamburger::HealthChange() {
    return -num.thirty_percent;
}

int Hamburger::ForceChange() {
    return num.sixty_percent;
}