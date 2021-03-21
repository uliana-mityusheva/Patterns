#include "MyPet.h"
#include "Commands.h"
#include "Print.h"

MyPet::MyPet() : happiness(max_status), health(max_status), force(max_status), sleep(max_status),
need_toilet(min_status), satiety(max_status) {
}

void MyPet::CheckStatus(int &status) {
    if (status > max_status) {
        status = max_status;
    } else if (status < min_status) {
        status = min_status;
    }
}

void MyPet::Feed() {
    Print print;
    print.ChooseFood(name);
    Commands choice;
    std::string answer = choice.ChooseFood();

    if (answer == "apple") {
        Apple food;
        happiness += food.HappinessChange(max_status, min_status);
        health += food.HealthChange(max_status, min_status);
        need_toilet += food.NeedToiletChange(max_status, min_status);
        satiety += food.SatietyChange(max_status, min_status);
        force += food.ForceChange(max_status, min_status);

        Print print;
        print.Apple(name);
    }

    if (answer == "poke") {
        Poke food;
        happiness += food.HappinessChange(max_status, min_status);
        health += food.HealthChange(max_status, min_status);
        need_toilet += food.NeedToiletChange(max_status, min_status);
        satiety += food.SatietyChange(max_status, min_status);
        force += food.ForceChange(max_status, min_status);

        Print print;
        print.Poke(name);
    }

    if (answer == "salad") {
        Salad food;
        happiness += food.HappinessChange(max_status, min_status);
        health += food.HealthChange(max_status, min_status);
        need_toilet += food.NeedToiletChange(max_status, min_status);
        satiety += food.SatietyChange(max_status, min_status);
        force += food.ForceChange(max_status, min_status);

        Print print;
        print.Salad(name);
    }

    if (answer == "hamburger") {
        Hamburger food;
        happiness += food.HappinessChange(max_status, min_status);
        health += food.HealthChange(max_status, min_status);
        need_toilet += food.NeedToiletChange(max_status, min_status);
        satiety += food.SatietyChange(max_status, min_status);
        force += food.ForceChange(max_status, min_status);

        Print print;
        print.Hamburger(name);
    }

    if (answer == "pancake") {
        Pancake food;
        happiness += food.HappinessChange(max_status, min_status);
        health += food.HealthChange(max_status, min_status);
        need_toilet += food.NeedToiletChange(max_status, min_status);
        satiety += food.SatietyChange(max_status, min_status);
        force += food.ForceChange(max_status, min_status);

        Print print;
        print.Pancake(name);
    }

    if (answer == "chips") {
       Chips food;
       happiness += food.HappinessChange(max_status, min_status);
       health += food.HealthChange(max_status, min_status);
       need_toilet += food.NeedToiletChange(max_status, min_status);
       satiety += food.SatietyChange(max_status, min_status);
       force += food.ForceChange(max_status, min_status);

        Print print;
        print.Chips(name);
    }

    CheckStatus(happiness);
    CheckStatus(health);
    CheckStatus(satiety);
    CheckStatus(need_toilet);
    CheckStatus(force);
}

void MyPet::GoToilet() {
    need_toilet = min_status;

    Print print;
    print.Toilet(name);
}

void MyPet::GoSleep() {
    force += 5 * max_status / 10;
    CheckStatus(force);

    sleep = max_status;
    Print print;
    print.GoSleep(name);
}

void MyPet::Sport() {
    Print print;
    if (force > 5 * max_status / 10) {
        force += -5 * max_status / 10;
        health += 4 * max_status / 10;
        sleep += -3 * max_status / 10;
        satiety += -3 * max_status / 10;

        CheckStatus(force);
        CheckStatus(health);
        CheckStatus(health);
        CheckStatus(sleep);
        CheckStatus(satiety);

        print.Sport(name);
    } else {
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

        happiness += toy.happiness_change(max_status, min_status);
        force += toy.force_change(max_status, min_status);
        health += toy.healthy_change(max_status, min_status);
        sleep += toy.sleep_change(max_status, min_status);
        satiety += toy.satiety_change(max_status, min_status);

        Print print;
        print.Computer(name);
    }

    if (answer == "puzzle") {
        Puzzle toy;

        happiness += toy.happiness_change(max_status, min_status);
        force += toy.force_change(max_status, min_status);
        sleep += toy.sleep_change(max_status, min_status);
        satiety += toy.satiety_change(max_status, min_status);

        Print print;
        print.Puzzle(name);
    }

    if (answer == "ball") {
        Ball toy;
        happiness += toy.happiness_change(max_status, min_status);
        force += toy.force_change(max_status, min_status);
        health += toy.healthy_change(max_status, min_status);
        sleep += toy.sleep_change(max_status, min_status);
        satiety += toy.satiety_change(max_status, min_status);

        Print print;
        print.Ball(name);
    }

    CheckStatus(happiness);
    CheckStatus(health);
    CheckStatus(sleep);
    CheckStatus(force);
    CheckStatus(satiety);
}

void MyPet::Treatment() {
    Print print;
    if (sleep > 3 * max_status / 10 && force > 2 * max_status) {
        health = max_status;
        print.Treatment(name);
    } else {
        if (sleep <= 3 * max_status) {
            print.SleepToTreatment(name);
        }

        if (force <= 2 * max_status) {
            print.ForceToTreatment(name);
        }
    }
}


std::string MyPet::CheckAlive() {
    happiness -= 1;
    health -= 1;
    if (health == min_status && happiness == min_status && force == min_status
    && sleep == min_status && satiety == min_status ) {
        return "died";
    } else {
        Print print;
        if (health < 3 * max_status / 10) {
            print.Sick(name);
        }
        if (need_toilet > 8 * max_status / 10) {
            print.NeedToilet(name);
        }
        if (happiness < 4 * max_status / 10) {
            print.Boring(name);
        }
        if (satiety < 2 * max_status / 10) {
            print.Hungry(name);
        }
        if (sleep < 3 * max_status / 10) {
            print.Sleep(name);
        }
        if (force < 2 * max_status / 10) {
            print.Tired(name);
        }
        return "ok";
    }
}

void MyPet::PrintParameters() const{
    Print print;

    print.PrintForce();
    print.PrintParameter(force, max_status);

    print.PrintSatiety();
    print.PrintParameter(satiety, max_status);

    print.PrintHealth();
    print.PrintParameter(health, max_status);

    print.PrintHappiness();
    print.PrintParameter(happiness, max_status);

    print.PrintSleep();
    print.PrintParameter(sleep, max_status);

    print.PrintNeedToilet();
    print.PrintParameter(need_toilet, max_status);
}