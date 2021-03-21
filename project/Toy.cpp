#include "Toy.h"

int Ball::force_change(int max, int min) {
    return -5 * max / 10;
}

int Ball::happiness_change(int max, int min) {
    return 4 * max / 10;
}

int Ball::healthy_change(int max, int min) {
    return 2 * max / 10;
}

int Ball::satiety_change(int max, int min) {
    return -3 * max / 10;
}

int Ball::sleep_change(int max, int min) {
    return -3 * max / 10;
}

int ComputerGame::sleep_change(int max, int min) {
    return -4 * max / 10;
}

int ComputerGame::satiety_change(int max, int min) {
    return -2 * max / 10;
}

int ComputerGame::healthy_change(int max, int mi) {
    return -2 * max / 10;
}

int ComputerGame::happiness_change(int max, int min) {
    return 5 * max / 10;
}

int ComputerGame::force_change(int max, int min) {
    return -3 * max / 10;
}

int Puzzle::force_change(int max, int min) {
    return -2 * max / 10;
}

int Puzzle::happiness_change(int max, int min) {
    return 3 * max / 10;
}

int Puzzle::satiety_change(int max, int min) {
    return -1 * max / 10;
}

int Puzzle::sleep_change(int max, int min) {
    return -1 * max / 10;
}