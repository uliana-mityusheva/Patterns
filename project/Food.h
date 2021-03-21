#pragma once

#include <iostream>


class Food {
public:
    virtual int HealthChange(int max, int min) = 0 ;
    virtual int HappinessChange(int max, int min) = 0;
    virtual int NeedToiletChange(int max, int min) = 0;
    virtual int SatietyChange(int max, int min) = 0;
    virtual int ForceChange(int max, int min) = 0;
};

class Apple: Food {
public:
    Apple() = default;

    int HappinessChange(int max, int min) override;
    int HealthChange(int max, int min) override;
    int NeedToiletChange(int max, int min) override;
    int SatietyChange(int max, int min) override;
    int ForceChange(int max, int min) override;
};

class Salad: Food {
public:
    Salad() = default;

    int HappinessChange(int max, int min) override;
    int HealthChange(int max, int min) override;
    int NeedToiletChange(int max, int min) override;
    int SatietyChange(int max, int min) override;
    int ForceChange(int max, int min) override;
};

class Poke: Food {
public:
    Poke() = default;

    int HappinessChange(int max, int min) override;
    int HealthChange(int max, int min) override;
    int NeedToiletChange(int max, int min) override;
    int SatietyChange(int max, int min) override;
    int ForceChange(int max, int min) override;
};

class Chips: Food {
public:
    Chips() = default;

    int HappinessChange(int max, int min) override;
    int HealthChange(int max, int min) override;
    int NeedToiletChange(int max, int min) override;
    int SatietyChange(int max, int min) override;
    int ForceChange(int max, int min) override;
};

class Pancake: Food {
public:
    Pancake() = default;

    int HappinessChange(int max, int min) override;
    int HealthChange(int max, int min) override;
    int NeedToiletChange(int max, int min) override;
    int SatietyChange(int max, int min) override;
    int ForceChange(int max, int min) override;
};

class Hamburger: Food {
public:
    Hamburger() = default;

    int HappinessChange(int max, int min) override;
    int HealthChange(int max, int min) override;
    int NeedToiletChange(int max, int min) override;
    int SatietyChange(int max, int min) override;
    int ForceChange(int max, int min) override;
};