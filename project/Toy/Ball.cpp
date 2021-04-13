#include "Ball.h"

int Ball::force_change() {
    return -num.fifty_percent;
}

int Ball::happiness_change() {
    return num.forty_percent;
}

int Ball::healthy_change() {
    return num.twenty_percent;
}

int Ball::satiety_change() {
    return -num.thirty_percent;
}

int Ball::sleep_change() {
    return -num.thirty_percent;
}