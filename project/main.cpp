#include <iostream>
#include "MyPet.h"
#include "Commands.h"
#include "Print.h"

int main() {
    Print print;
    print.Hello();
    MyPet pet;
    Commands command;
    pet.name = command.ReadName();
    print.Start(pet.name);

    std::string status = "ok";
    std::string read = "ok";
    do {
        read = command.Read(pet);

        status = pet.CheckAlive();
    } while (read != "exit" && status != "died");

    if (status == "died") {
        print.Died(pet.name);
    }
    print.End();
    return 0;
}
