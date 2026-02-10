#include "Orc.h"
#include "../MainGameLogic/Constants_Game.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

Orc::Orc() {
    this->health = GameSettings::Orc::HP;
    this->maxhealth = GameSettings::Orc::HP;
    this->damage = GameSettings::Orc::DAMAGE;
    this->mana = 0;
    this->name = "Orc";
    berserker.name = "Berserker";
    protection.name = "Protection";
}
void Orc::ShowAbilities()
{
    std::cout << "1) " << berserker.name << "\n2) " << protection.name << std::endl;
}
void Orc::FirstAbility(Hero* target) {
    if (this->health > GameSettings::Orc::Berserker::HEALTH_COST) {
        this->health -= GameSettings::Orc::Berserker::HEALTH_COST;
        int total_damage = this->damage + GameSettings::Orc::Berserker::ADDED_DAMAGE;
        target->health -= total_damage;

        if (target->health < 0) target->health = 0;

        std::cout << "Successful!" << " target hp = " << target->health << "target mana ="<< target->mana << std::endl;
        std::cout << "Your hp = " << this->health << " your mana = " << target->mana << std::endl;
        if (rand() % 100 < GameSettings::Orc::Berserker::CHANCE_TO_VAMPIRISM) {
            std::cout << "Lucky! You got vampirism: +5 HP" << std::endl;
            this->health += 5;
            if (this->health > GameSettings::Orc::HP)
                this->health = GameSettings::Orc::HP;
        }
    } else {
        std::cout << "Not enough health to go Berserk!" << std::endl;
    }
    }

void Orc::SecondAbility(Hero* target) {
    if (this->health > GameSettings::Orc::Protection::HEALTH_COST) {
        this->health -= GameSettings::Orc::Protection::HEALTH_COST;
        int total_damage = this->damage + GameSettings::Orc::Protection::ADDED_DAMAGE;
        target->health -= total_damage;

        if (target->health < 0) target->health = 0;

        this->health += GameSettings::Orc::Protection::ADDED_HP;
        std::cout << "Successful!" << " target hp = " << target->health << "target mana ="<< target->mana << std::endl;
        std::cout << "From the ability you got " << "10 hp | your hp = " << target->health << " your mana = " << target->mana << std::endl;
    }
    else
    {
        std::cout << "Not enough health to go Berserk!" << std::endl;
    }
}