#include "BattleEngine.h"
#include <iostream>
#include <string>
#include <algorithm>

#include "Constants_Game.h"


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

    std::cout << "Great choose! " << PlayerName<< " you chosen " << Target->name << "with | Health = " << Target->health << "And | mana =  " << Target->mana << std::endl;
}

void BattleEngine::StartFight() {
    srand(time(nullptr));
    int WhichPlayerMove = rand() % 2;
    std::cout << "||||||| BATTLE STARTED |||||||" << std::endl;
    while (p1->health > 0 && p2->health > 0) {
        if (WhichPlayerMove == 0) {
            PlayerTurn(p1,p2,FirstPlayerName);
        }
        else {
            PlayerTurn(p2,p1,SecondPlayerName);
            WhichPlayerMove = 0;
        }
    }
    if (p1->health <= 0) {
        std::cout << "Congratulations!" << SecondPlayerName << "you won!" << std::endl;
    }
    else {
        std::cout << "Congratulations!" << FirstPlayerName << "you won!" << std::endl;
    }
}

void BattleEngine::PlayerTurn(Hero* attacker, Hero* victim, std::string attackerName) {
    int choice;
    std::cout << "\n----- " << attackerName << " your turn, please choose an option. -----" << std::endl;
    std::cout << "1) simple attack \n2) Ability \n3) parry" << std::endl;
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << attackerName << " deals " << attacker->damage << " damage!" << std::endl;
            victim->health -= attacker->damage;
            if (victim->health < 0) victim->health = 0;
            break;

        case 2:
            int abilityChoice;
            std::cout << attackerName << ", choose ability: " << std::endl;
            attacker->ShowAbilities();
            std::cin >> abilityChoice;

            switch (abilityChoice) {
                case 1:
                    attacker->FirstAbility(victim);
                    break;
                case 2:
                    attacker->SecondAbility(victim);
                    break;
                default:
                    std::cout << "Invalid ability choice!" << std::endl;
                    break;
            }
            break;

        case 3:
            std::cout << attackerName << " decided to wait and skipped the turn!" << std::endl;
            break;

        default:
            std::cout << "Invalid action! You lost your turn due to confusion." << std::endl;
            break;
    }
    std::cout << "\n================================" << std::endl;
    std::cout << " STATUS AFTER TURN:" << std::endl;
    std::cout << " " << attackerName << " -> HP: " << attacker->health << " | Mana: " << attacker->mana << std::endl;
    std::cout << " Enemy (" << victim->name << ") -> HP: " << victim->health << " | Mana: " << victim->mana << std::endl;
    std::cout << "================================" << std::endl;

    if (victim->health <= 0) {
        std::cout << "\n!!! " << attackerName << " WINS !!!" << std::endl;
    }
}
