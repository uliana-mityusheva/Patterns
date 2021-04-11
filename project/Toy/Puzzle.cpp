#include "Puzzle.h"

int Puzzle::force_change() {
    return -num.twenty_percent;
}

int Puzzle::happiness_change() {
    return num.thirty_percent;
}

int Puzzle::satiety_change() {
    return -num.ten_percent;
}

int Puzzle::sleep_change() {
    return -num.ten_percent;
}