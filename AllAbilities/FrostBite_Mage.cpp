#include "FrostBite_Mage.h"
#include "../MainGameLogic/Constants_Game.h"

FrostBite_Mage::FrostBite_Mage() {
    this->duration = GameSettings::Mage::FrostBite::ROUND_DURATION;
    this->manaCost = GameSettings::Mage::FrostBite::MANA_COST;
    this->Chance_To_DoubleDamage = GameSettings::Mage::FrostBite::CHANCE_TO_DOUBLE_DAMAGE;
    this->damage = GameSettings::Mage::FrostBite::DAMAGE;
}
