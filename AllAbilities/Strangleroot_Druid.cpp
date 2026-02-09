#include "Strangleroot_Druid.h"

#include "../MainGameLogic/Constants_Game.h"

Strangleroot_Druid::Strangleroot_Druid() {
    this->MANA_COST = GameSettings::Druid::Strangleroot::MANA_COST;
    this->CHANCE_TO_DoubleDamage = GameSettings::Druid::Strangleroot::CHANCE_TO_DOUBLE_DAMAGE;
    this->ROUND_DURATION = GameSettings::Druid::Strangleroot::ROUND_DURATION;
    this->CHANCE_TO_PassDamage = GameSettings::Druid::Strangleroot::CHANCE_TO_PASS_DAMAGE;
    this->DAMAGE = GameSettings::Druid::Strangleroot::DAMAGE;
}

