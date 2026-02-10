#include "Archer.h"
#include "../MainGameLogic/Constants_Game.h"
#include <iostream>
Archer::Archer() {
    this->health =GameSettings::Archer::HP;
    this->maxhealth =GameSettings::Archer::HP;
    this->damage =GameSettings::Archer::DAMAGE;
    this->mana = GameSettings::Archer::MANA;
    HailOfArrows.name = "HailOfArrows";
    Powershot.name = "Powershot";
};
void  Archer::ShowAbilities()
{
    std::cout << "1) " << HailOfArrows.name << "\n2) " <<Powershot.name << std::endl;
}

void Archer::FirstAbility(Hero *target) {
    if (this->mana >= GameSettings::Archer::Hail_of_arrows::MANA_COST) {
        this->mana -= GameSettings::Archer::Hail_of_arrows::MANA_COST;
        target->health -= GameSettings::Archer::Hail_of_arrows::DAMAGE;

        if (target->health < 0) target->health = 0;

        std::cout << "Successful!" << " target hp = " << target->health << "target mana ="<< target->mana << std::endl;
        std::cout << "Your hp = " << this->health << " your mana = " << this->mana << std::endl;
    }
    else {
        std::cout << "Not enough mana to use Hail_of_arrows!" << std::endl;
    }
}

void Archer::SecondAbility(Hero *target) {
    if (this->mana >= GameSettings::Archer::Powershot::MANA_COST) {
        this->mana -= GameSettings::Archer::Powershot::MANA_COST;
        target->health -= GameSettings::Archer::Powershot::DAMAGE;

        if (target->health < 0) target->health = 0;

        std::cout << "Successful!" << " target hp = " << target->health << "target mana ="<< target->mana << std::endl;
        std::cout << "Your hp = " << this->health << " your mana = " << this->mana << std::endl;

        if (rand() % 100 < GameSettings::Archer::Powershot::CHANCE_TO_DOUBLE_DAMAGE) {
            std::cout << "Lucky! You got double damage(second arrow hit!)" << std::endl;
            target->health -= GameSettings::Archer::Powershot::DAMAGE;
            if (target->health < 0) target->health = 0;
            std::cout << "Target HP after second arrow: " << target->health << std::endl;
        }

    }
    else {
        std::cout << "Not enough mana to use Powershot!" << std::endl;
    }
}
