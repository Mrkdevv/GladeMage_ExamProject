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

