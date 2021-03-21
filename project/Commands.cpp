#include "Commands.h"
#include "Print.h"

std::string Commands::Read(MyPet &object) {
    std::string command;

    std::cin >> command;

    if (command == "feed" || command == "Feed") {
        object.Feed();
    } else if (command == "sleep" || command == "Sleep") {
        object.GoSleep();
    } else if (command == "play" || command == "Play") {
        object.Play();
    } else if (command == "toilet" || command == "Toilet") {
        object.GoToilet();
    } else if (command == "treatment" || command == "Treatment") {
        object.Treatment();
    } else if (command == "parameters" || command == "Parameters") {
        object.PrintParameters();
    } else if (command == "sport" || command == "Sport") {
        object.Sport();
    } else if (command == "exit" || command == "Exit") {
        return "exit";
    } else {
        Print print;
        print.Error();
    }

    return "ok";
}

std::string Commands::ChooseFood() {
    std::string command;
    std::cin >> command;

    if (command == "apple" || command == "Apple") {
        return "apple";
    } else if (command == "poke" || command == "Poke") {
        return "poke";
    } else if (command == "salad" || command == "Salad") {
        return "salad";
    } else if (command == "hamburger" || command == "Hamburger") {
        return "hamburger";
    } else if (command == "chips" || command == "Chips") {
        return "chips";
    } else if (command == "pancake" || command == "Pancake") {
        return "pancake";
    } else {
        Print print;
        print.Error();
        return "error";
    }
}

std::string Commands::ChooseToy() {
    std::string command;
    std::cin >> command;

    if (command == "ball" || command == "Ball") {
        return "ball";
    } else if (command == "computer" || command == "Computer") {
        return "computer";
    } else if (command == "puzzle" || command == "Puzzle") {
        return "puzzle";
    } else {
        Print print;
        print.Error();
        return "error";
    }
}

std::string Commands::ReadName() {
    std::string name;
    std::cin >> name;
    return name;
}