#pragma once

#include <iostream>
#include "MyPet.h"

class Commands {
public:
    Commands() = default;
    std::string Read(MyPet &object);
    std::string ReadName();
    std::string ChooseFood();
    std::string ChooseToy();
};
