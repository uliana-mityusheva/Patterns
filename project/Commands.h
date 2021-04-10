#pragma once

#include <iostream>
#include "MyPet.h"
#include "Reader.h"

class Commands {
public:
    Reader read;

    Commands() = default;
    std::string Read(MyPet &object);
    std::string ReadName();
    std::string ChooseFood();
    std::string ChooseToy();
};
