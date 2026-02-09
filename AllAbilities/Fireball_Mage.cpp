#include "Fireball_Mage.h"
#include "../MainGameLogic/Constants_Game.h"

Fireball_Mage::Fireball_Mage() {

    this->manaCost = GameSettings::Mage::Fireball::MANA_COST;
    this->duration = GameSettings::Mage::Fireball::ROUND_DURATION;
    this->damage = GameSettings::Mage::Fireball::DAMAGE;
    this->Chance_To_DoubleDamage = GameSettings::Mage::Fireball::CHANCE_TO_DOUBLE_DAMAGE;

}
