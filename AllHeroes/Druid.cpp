#include "Druid.h"
#include "../MainGameLogic/Constants_Game.h"
#include <iostream>
Druid::Druid() {
    this->health =GameSettings::Druid::HP;
    this->maxhealth =GameSettings::Druid::HP;
    this->damage =GameSettings::Druid::DAMAGE;
    this->mana = GameSettings::Druid::MANA;

    Strangleroot_Druid.name = "Strangleroot_Druid";
    Wild_Shape_Druid.name = "Wild_Shape_Druid";
}
void  Druid::ShowAbilities()
{
    std::cout << "1) " << Strangleroot_Druid.name << "\n2) " <<Wild_Shape_Druid.name << std::endl;
}
void Druid::FirstAbility(Hero *target) {
    if (this->mana >= GameSettings::Druid::Strangleroot::MANA_COST) {
        this->mana -= GameSettings::Druid::Strangleroot::MANA_COST;
        target->health -= GameSettings::Druid::Strangleroot::DAMAGE;

        if (target->health < 0) target->health = 0;

        std::cout << "Successful!" << " target hp = " << target->health << "target mana ="<< target->mana << std::endl;
        std::cout << "Your hp = " << this->health << " your mana = " << this->mana << std::endl;

        if (rand() % 100 < GameSettings::Druid::Strangleroot::CHANCE_TO_DOUBLE_DAMAGE) {
            std::cout << "Lucky! You got double damage(second hit!)" << std::endl;
            target->health -= GameSettings::Druid::Strangleroot::DAMAGE;
            if (target->health < 0) target->health = 0;
            std::cout << "Target HP after second arrow: " << target->health << std::endl;
        }
    }
    else {
        std::cout << "Not enough mana to use Strangeleroot!" << std::endl;
    }
}

void Druid::SecondAbility(Hero *target) {
    if (this->mana >= GameSettings::Druid::WildShape::MANA_COST) {
        this->mana -= GameSettings::Druid::WildShape::MANA_COST;

        int total_damage = this->damage + GameSettings::Druid::WildShape::ADDED_DAMAGE;
        target->health -= total_damage;
        if (target->health < 0) target->health = 0;

        this->health += GameSettings::Druid::WildShape::ADDED_HP;
        if (this->health > GameSettings::Druid::HP) {
            this->health = GameSettings::Druid::HP;
        }
        std::cout << "Successful! Target hp = " << target->health << " target mana = " << target->mana << std::endl;
        std::cout << "Your hp = " << this->health << " your mana = " << this->mana << std::endl;

        if (rand() % 100 < GameSettings::Druid::WildShape::CHANCE_TO_VAMPIRISM) {
            std::cout << "Lucky! You got vampirism: +5 HP" << std::endl;
            this->health += 5;
            if (this->health > GameSettings::Druid::HP) {
                this->health = GameSettings::Druid::HP;
            }
        }
    }
    else {
        std::cout << "Not enough mana to use WildShape!" << std::endl;
    }
}