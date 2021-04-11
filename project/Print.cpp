#include "Print.h"

Print::Print() {
    table.push_back(str.zero);
    table.push_back(str.one);
    table.push_back(str.two);
    table.push_back(str.three);
    table.push_back(str.four);
    table.push_back(str.five);
    table.push_back(str.six);
    table.push_back(str.seven);
    table.push_back(str.eight);
    table.push_back(str.nine);
    table.push_back(str.ten);
}

int Print::Number(int parameter) {
    int ans = 0;
    if (parameter == num.min_status) {
        ans = 0;
    } else if (parameter == num.min_status + num.ten_percent) {
        ans = 1;
    } else if (parameter == num.min_status + num.twenty_percent) {
        ans = 2;
    } else if (parameter == num.min_status + num.thirty_percent) {
        ans = 3;
    } else if (parameter == num.min_status + num.forty_percent) {
        ans = 4;
    } else if (parameter == num.min_status + num.fifty_percent) {
        ans = 5;
    } else if (parameter == num.min_status + num.sixty_percent) {
        ans = 6;
    } else if (parameter == num.min_status + num.seventy_percent) {
        ans = 7;
    } else if (parameter == num.min_status + num.eighty_percent) {
        ans = 8;
    } else if (parameter == num.min_status + num.ninety_percent) {
        ans = 9;
    } else if (parameter == num.max_status) {
        ans = 10;
    }
    return ans;
}

void Print::Hello() {
    print.output_one(str.hello);
}

void Print::Start(std::string name) {
    print.output_three(str.start, name, str.line_break);
}

void Print::ChooseFood(std::string name) {
    print.output_three(str.choose_meal, name, str.line_break);
    print.output_one(str.meal);
}

void Print::ChooseToy(std::string name) {
    print.output_three(str.choose_toy, name, str.line_break);
    print.output_one(str.toys);
}

void Print::Error() {
    print.output_one(str.error);
}

void Print::PrintParameter(int parameter) {
    print.output_one(table[Number(parameter)]);
}

void Print::PrintForce() {
    print.output_one(str.force);
}

void Print::PrintHappiness() {
    print.output_one(str.happiness);
}

void Print::PrintHealth() {
    print.output_one(str.health);
}

void Print::PrintSatiety() {
    print.output_one(str.satiety);
}

void Print::PrintNeedToilet() {
    print.output_one(str.need_toilet);
}

void Print::PrintSleep() {
    print.output_one(str.sleep);
}

void Print::ForceToSport(std::string name) {
    print.output_two(name, str.force_to_sport);
}

void Print::ForceToTreatment(std::string name) {
    print.output_two(name, str.force_to_treatment);
}

void Print::SleepToTreatment(std::string name) {
    print.output_two(name, str.sleep_to_treatment);
}

void Print::Died(std::string name) {
    print.output_three(str.unfortunately, name, str.died);
}

void Print::End() {
    print.output_one(str.end);
}

void Print::Sick(std::string name) {
    print.output_two(name, str.sick);
}

void Print::GoToilet(std::string name) {
    print.output_two(name, str.go_toilet);
}

void Print::Boring(std::string name){
    print.output_two(name, str.boring);
}

void Print::Hungry(std::string name) {
    print.output_two(name, str.hungry);
}

void Print::Sleep(std::string name) {
    print.output_two(name, str.want_to_sleep);
}

void Print::Tired(std::string name) {
    print.output_two(name, str.tired);
}

void Print::Computer(std::string name) {
    print.output_two(name, str.computer);
}

void Print::Ball(std::string name) {
    print.output_two(name, str.ball);
}

void Print::Puzzle(std::string name) {
    print.output_two(name, str.puzzle);
}

void Print::Apple(std::string name) {
    print.output_two(name, str.apple);
}

void Print::Poke(std::string name) {
    print.output_two(name, str.poke);
}

void Print::Chips(std::string name) {
    print.output_two(name, str.chips);
}

void Print::Hamburger(std::string name) {
    print.output_two(name, str.hamburger);
}

void Print::Pancake(std::string name) {
    print.output_two(name, str.pancake);
}

void Print::Salad(std::string name) {
    print.output_two(name, str.salad);
}

void Print::Toilet(std::string name) {
    print.output_two(name, str.toilet);
}

void Print::GoSleep(std::string name) {
    print.output_two(name, str.go_sleep);
}

void Print::Treatment(std::string name) {
    print.output_two(name, str.treatment);
}

void Print::Sport(std::string name) {
    print.output_two(name, str.sport);
}
