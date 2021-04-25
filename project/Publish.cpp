#include "Publish.h"

void Publish::output_one(std::string one) {
    std::cout << one;
    std::cout.flush();
}

void Publish::output_two(std::string one, std::string two) {
    std::cout << one << two;
    std::cout.flush();
}

void Publish::output_three(std::string one, std::string two, std::string three) {
    std::cout << one << two << three;
    std::cout.flush();
}
