#include "Mage.h"
#include "../MainGameLogic/Constants_Game.h"

Mage::Mage() {
    this->health =GameSettings::Mage::HP;
    this->maxhealth =GameSettings::Mage::HP;
    this->damage =GameSettings::Mage::DAMAGE;
    this->mana =GameSettings::Mage::MANA;
}
