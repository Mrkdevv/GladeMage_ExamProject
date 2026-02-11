#include "SwordMan.h"
#include "../MainGameLogic/Constants_Game.h"
#include <iostream>

SwordMan::SwordMan() {
    this->health =GameSettings::SwordMan::HP;
    this->maxhealth =GameSettings::SwordMan::HP;
    this->damage =GameSettings::SwordMan::DAMAGE;
    this->mana =GameSettings::SwordMan::MANA;
    Slashing_Lunge.name = "Slashing_Lunge";
    Sword_Lunge.name = "Sword_Lunge";

}
void SwordMan::ShowAbilities()
{
    std::cout << "1) " << Slashing_Lunge.name << "\n2) " << Sword_Lunge.name << std::endl;
}
void SwordMan::FirstAbility(Hero* target) {
    if (this->mana >= GameSettings::SwordMan::Slashing_Lunge::MANA_COST) {
        this->mana -= GameSettings::SwordMan::Slashing_Lunge::MANA_COST;
        target->health -= GameSettings::SwordMan::Slashing_Lunge::DAMAGE;

        if (target->health < 0) target->health = 0;

        std::cout << "Successful! Target hp = " << target->health << " target mana = " << target->mana << std::endl;
        std::cout << "Your hp = " << this->health << " your mana = " << this->mana << std::endl;

        if (rand() % 100 < GameSettings::SwordMan::Slashing_Lunge::CHANCE_TO_VAMPIRISM) {
            std::cout << "Lucky! You got vampirism: +5 HP" << std::endl;
            this->health += 5;
            if (this->health > GameSettings::SwordMan::HP) {
                this->health = GameSettings::SwordMan::HP;
            }
        }
    }
    else {
        std::cout << "Not enough mana to use Slashing_Lunge!" << std::endl;
    }
}

void SwordMan::SecondAbility(Hero* target) {
    if (this->mana >= GameSettings::SwordMan::SwordLunge::MANA_COST) {
        this->mana -= GameSettings::SwordMan::SwordLunge::MANA_COST;
        target->health -= GameSettings::SwordMan::SwordLunge::DAMAGE;

        if (target->health < 0) target->health = 0;

        std::cout << "Successful! Target hp = " << target->health << " target mana = " << target->mana << std::endl;
        std::cout << "Your hp = " << this->health << " your mana = " << this->mana << std::endl;

        if (rand() % 100 < GameSettings::SwordMan::SwordLunge::CHANCE_TO_DOUBLE_DAMAGE) {
            std::cout << "Lucky! You got double damage(second hit!)" << std::endl;
            target->health -= GameSettings::SwordMan::SwordLunge::DAMAGE;
            if (target->health < 0) target->health = 0;
            std::cout << "Target HP after second hit: " << target->health << std::endl;
        }
    }
    else {
        std::cout << "Not enough mana to use SwordLunge!" << std::endl;
    }
}