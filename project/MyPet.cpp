#include "MyPet.h"

#include "Commands.h"
#include "Print.h"


MyPet::MyPet() : health(num.max_status), happiness(num.max_status), sleep(num.max_status), force(num.max_status),
satiety(num.max_status), need_toilet(num.min_status) {
}


void MyPet::CheckStatus(int &status) {
    if (status > num.max_status) {
        status = num.max_status;
    } else if (status < num.min_status) {
        status = num.min_status;
    }
}

void MyPet::CheckAllStatus() {
    CheckStatus(happiness);
    CheckStatus(health);
    CheckStatus(sleep);
    CheckStatus(force);
    CheckStatus(satiety);
    CheckStatus(need_toilet);
}

void MyPet::Feed() {
    Print print;
    print.ChooseFood(name);

    Commands choice;
    std::string answer = choice.ChooseFood();

    if (answer == "apple") { //TODO подифицировать изменение параметров (Food, Toy)
        Apple food;
        happiness += food.HappinessChange();
        health += food.HealthChange();
        need_toilet += food.NeedToiletChange();
        satiety += food.SatietyChange();
        force += food.ForceChange();

        print.Apple(name);
    }

    if (answer == "poke") {
        Poke food;
        happiness += food.HappinessChange();
        health += food.HealthChange();
        need_toilet += food.NeedToiletChange();
        satiety += food.SatietyChange();
        force += food.ForceChange();

        print.Poke(name);
    }

    if (answer == "salad") {
        Salad food;
        happiness += food.HappinessChange();
        health += food.HealthChange();
        need_toilet += food.NeedToiletChange();
        satiety += food.SatietyChange();
        force += food.ForceChange();

        print.Salad(name);
    }

    if (answer == "hamburger") {
        Hamburger food;
        happiness += food.HappinessChange();
        health += food.HealthChange();
        need_toilet += food.NeedToiletChange();
        satiety += food.SatietyChange();
        force += food.ForceChange();

        print.Hamburger(name);
    }

    if (answer == "pancake") {
        Pancake food;
        happiness += food.HappinessChange();
        health += food.HealthChange();
        need_toilet += food.NeedToiletChange();
        satiety += food.SatietyChange();
        force += food.ForceChange();

        print.Pancake(name);
    }

    if (answer == "chips") {
       Chips food;
       happiness += food.HappinessChange();
       health += food.HealthChange();
       need_toilet += food.NeedToiletChange();
       satiety += food.SatietyChange();
       force += food.ForceChange();

       print.Chips(name);
    }

    CheckAllStatus();
}

void MyPet::GoToilet() {
    need_toilet = num.min_status;

    Print print;
    print.Toilet(name);
}

void MyPet::GoSleep() {
    force += num.fifty_percent;
    CheckAllStatus();

    sleep = num.max_status;

    Print print;
    print.GoSleep(name);
}

void MyPet::Sport() {
    if (force > num.fifty_percent) {
        force += -num.fifty_percent;
        health += num.forty_percent;
        sleep += -num.thirty_percent;
        satiety += -num.thirty_percent;

        CheckAllStatus();

        Print print;
        print.Sport(name);
    } else {

        Print print;
        print.ForceToSport(name);
    }
}

void MyPet::Play() {
    Print print;
    print.ChooseToy(name);

    Commands choice;
    std::string answer = choice.ChooseToy();

    if (answer == "computer") {
        ComputerGame toy;

        happiness += toy.happiness_change();
        force += toy.force_change();
        health += toy.healthy_change();
        sleep += toy.sleep_change();
        satiety += toy.satiety_change();

        print.Computer(name);
    }

    if (answer == "puzzle") {
        Puzzle toy;

        happiness += toy.happiness_change();
        force += toy.force_change();
        sleep += toy.sleep_change();
        satiety += toy.satiety_change();

        print.Puzzle(name);
    }

    if (answer == "ball") {
        Ball toy;
        happiness += toy.happiness_change();
        force += toy.force_change();
        health += toy.healthy_change();
        sleep += toy.sleep_change();
        satiety += toy.satiety_change();

        print.Ball(name);
    }

    CheckAllStatus();
}

void MyPet::Treatment() {
    if (sleep > num.thirty_percent && force > num.twenty_percent) {
        health = num.max_status;

        Print print;
        print.Treatment(name);
    } else {
        if (sleep <= num.thirty_percent) {
            Print print;
            print.SleepToTreatment(name);
        }

        if (force <= num.twenty_percent) {
            Print print;
            print.ForceToTreatment(name);
        }
    }
}

void MyPet::CheckAlive() {
    happiness -= num.ten_percent;
    health -= num.ten_percent;
    satiety -= num.ten_percent;
    need_toilet += num.ten_percent;
    sleep -= num.ten_percent;

    CheckAllStatus();

    Print print;

    if (health < num.thirty_percent) {
        print.Sick(name);
    }
    if (need_toilet > num.eighty_percent) {
        print.GoToilet(name);
    }
    if (happiness < num.forty_percent) {
        print.Boring(name);
    }
    if (satiety < num.twenty_percent) {
        print.Hungry(name);
    }
    if (sleep < num.thirty_percent) {
        print.Sleep(name);
    }
    if (force < num.twenty_percent) {
        print.Tired(name);
    }
    
}

std::string MyPet::CheckStatus() {
    CheckAllStatus();

    if (health == num.min_status || happiness == num.min_status && force == num.min_status
                                    && sleep == num.min_status || satiety == num.min_status ) {
        return "died";
    }
    return "ok";
}

void MyPet::PrintParameters() {
    Print print;
    print.PrintForce();
    print.PrintParameter(force);

    print.PrintSatiety();
    print.PrintParameter(satiety);

    print.PrintHealth();
    print.PrintParameter(health);

    print.PrintHappiness();
    print.PrintParameter(happiness);

    print.PrintSleep();
    print.PrintParameter(sleep);

    print.PrintNeedToilet();
    print.PrintParameter(need_toilet);
}