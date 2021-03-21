#pragma once

class Toy {
public:
    virtual int happiness_change(int max, int min) = 0;
    virtual int force_change(int max, int min) = 0;
    virtual int satiety_change (int max, int min) = 0;
    virtual int sleep_change(int max, int min) = 0;
};

class Ball : public Toy {
public:
    Ball() = default;

    int happiness_change(int max, int min) override;
    int force_change(int max, int min) override;
    int satiety_change (int max, int min) override;
    int sleep_change(int max, int min) override;

    int healthy_change(int max, int min);
};

class ComputerGame : public Toy {
public:
    ComputerGame() = default;

    int happiness_change(int max, int min) override;
    int force_change(int max, int min) override;
    int satiety_change (int max, int min) override;
    int sleep_change(int max, int min) override;

    int healthy_change(int max, int mi);
};

class Puzzle : public Toy {
public:
    Puzzle() = default;

    int happiness_change(int max, int min) override;
    int force_change(int max, int min) override;
    int satiety_change (int max, int min) override;
    int sleep_change(int max, int min) override;
};