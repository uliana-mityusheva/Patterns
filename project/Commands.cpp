#include "Commands.h"
#include "Print.h"

std::string ToLower(const std::string &str) {
    std::string ans;
    size_t size = str.size();
    for (size_t i = 0; i < size; ++i) {
        ans += tolower(str[i]);
    }
    return ans;
}

std::string Commands::Read(MyPet &object) {
    std::string command = read.Input();

    command = ToLower(command);
    if (command == "feed") {
        object.Feed();
    } else if (command == "sleep") {
        object.GoSleep();
    } else if (command == "play") {
        object.Play();
    } else if (command == "toilet") {
        object.GoToilet();
    } else if (command == "treatment") {
        object.Treatment();
    } else if (command == "parameters") {
        object.PrintParameters();
    } else if (command == "sport") {
        object.Sport();
    } else if (command == "exit") {
        return "exit";
    } else {
        Print print;
        print.Error();
    }

    return "ok";
}

std::string Commands::ChooseFood() {
    std::string command = read.Input();
    command = ToLower(command);

    if (command == "apple") {
        return "apple";
    } else if (command == "poke") {
        return "poke";
    } else if (command == "salad") {
        return "salad";
    } else if (command == "hamburger") {
        return "hamburger";
    } else if (command == "chips") {
        return "chips";
    } else if (command == "pancake") {
        return "pancake";
    } else {
        Print print;
        print.Error();
        return "error";
    }
}

std::string Commands::ChooseToy() {
    std::string command = read.Input();

    if (ToLower(command) == "ball") {
        return "ball";
    } else if (ToLower(command) == "computer") {
        return "computer";
    } else if (ToLower(command) == "puzzle") {
        return "puzzle";
    } else {
        Print print;
        print.Error();
        return "error";
    }
}

std::string Commands::ReadName() {
    std::string name = read.Input();
    return name;
}
