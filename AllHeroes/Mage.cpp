#include "Mage.h"
#include "../MainGameLogic/Constants_Game.h"
#include <iostream>

Mage::Mage() {
    this->health =GameSettings::Mage::HP;
    this->maxhealth =GameSettings::Mage::HP;
    this->damage =GameSettings::Mage::DAMAGE;
    this->mana =GameSettings::Mage::MANA;
    Fireball.name = "Fireball";
    Frostbite.name = "Frostbite";
}
void Mage::ShowAbilities()
{
    std::cout << "1) " << Fireball.name << "\n2) " << Frostbite.name << std::endl;
}
void Mage::FirstAbility(Hero* target) {
    if (this->mana >= GameSettings::Mage::Fireball::MANA_COST) {
        this->mana -= GameSettings::Mage::Fireball::MANA_COST;
        target->health -= GameSettings::Mage::Fireball::DAMAGE;

        if (target->health < 0) target->health = 0;

        std::cout << "Fireball hits! Target HP = " << target->health << " | Target Mana = " << target->mana << std::endl;
        std::cout << "Your HP = " << this->health << " | Your Mana = " << this->mana << std::endl;

        if (rand() % 100 < GameSettings::Mage::Fireball::CHANCE_TO_DOUBLE_DAMAGE) {
            std::cout << "Critical Burn! Fireball exploded twice!" << std::endl;
            target->health -= GameSettings::Mage::Fireball::DAMAGE;
            if (target->health < 0) target->health = 0;
            std::cout << "Target HP after explosion: " << target->health << std::endl;
        }
    }
    else {
        std::cout << "Not enough mana to cast Fireball!" << std::endl;
    }
}
void Mage::SecondAbility(Hero* target) {
    if (this->mana >= GameSettings::Mage::FrostBite::MANA_COST) {
        this->mana -= GameSettings::Mage::FrostBite::MANA_COST;
        target->health -= GameSettings::Mage::FrostBite::DAMAGE;

        if (target->health < 0) target->health = 0;

        std::cout << "FrostBite successful! Target HP = " << target->health << std::endl;
        std::cout << "Your HP = " << this->health << " | Your Mana = " << this->mana << std::endl;

        if (rand() % 100 < GameSettings::Mage::FrostBite::CHANCE_TO_DOUBLE_DAMAGE) {
            std::cout << "Ice Nova! FrostBite deals massive damage!" << std::endl;
            target->health -= GameSettings::Mage::FrostBite::DAMAGE;
            if (target->health < 0) target->health = 0;
            std::cout << "Target HP after freezing: " << target->health << std::endl;
        }
    }
    else {
        std::cout << "Not enough mana to cast FrostBite!" << std::endl;
    }
}
