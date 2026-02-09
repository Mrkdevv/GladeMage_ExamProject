#include "BattleEngine.h"
#include <iostream>
#include <string>

void BattleEngine::PlayersName(int num, std::string &nameTarget) {
    int attempts = 3;
    std::string name;
    while (attempts > 0) {
        std::cout << "Hello, player# "<< num <<", please enter your nickname: ";
        std::cin >> name;
        if (name.length() < 2) {
            std::cout << "Sorry, your name can't be empty or too short. try again! " << attempts << " left." << std::endl;
            attempts--;
        }
        else {
            nameTarget = name;
            std::cout << "Hello! " << name << " welcome to my game!" << std::endl;
            break;
        }
        if (attempts == 0) {
            nameTarget = "Player " + std::to_string(num);
            std::cout << "Sorry, no attempts left! Base nickname set" << std::endl;
        }
    }
}
void BattleEngine::PlayersHeroChoose(std::string PlayerName, Hero* &Target) {
    int p1choice;
    do {
        std::cout << "Ok, " << PlayerName << " now you must choose your hero from this list below: " << std::endl;
        std::cout << "\n1) Orc\t    | Tank   | High HP, No Mana.'" << std::endl;
        std::cout << "2) Mage\t   | Glass  | Low HP, Insane Magic Damage." << std::endl;
        std::cout << "3) Archer\t | Agility| High Crit, Medium HP. Fast as wind." << std::endl;
        std::cout << "4) Knight\t | Balance| Solid Defense & Consistent Damage." << std::endl;
        std::cout << "5) Druid\t  | Hybrid | Can heal or transform. Versatile." << std::endl;

        std::cin >> p1choice;

        if (Target != nullptr) { // обнуляэм
            delete Target;
            Target = nullptr;
        }
        switch (p1choice) {
            case 1:
                Target = new Orc();
                break;
            case 2:
                Target = new Mage();
                break;
            case 3:
                Target = new Archer();
                break;
            case 4:
                Target = new SwordMan();
                break;
            case 5:
                Target = new Druid();
                break;
            default:
                std::cout << "Sorry, choose your hero from list!" << std::endl;

        }
    }while (Target == nullptr);

    std::cout << "Great choose! " << PlayerName<< " you chosen " << Target->name << "with | Health = " << Target->hp << "And | mana =  " << Target->mana << std::endl;
}
