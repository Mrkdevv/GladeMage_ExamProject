#include "Protection_Orc.h"
#include "../MainGameLogic/Constants_Game.h"

Protection_Orc::Protection_Orc() {
    this->health_cost = GameSettings::Orc::Protection::HEALTH_COST;
    this->added_damage = GameSettings::Orc::Protection::ADDED_DAMAGE;
    this->duration = GameSettings::Orc::Protection::ROUND_DURATION;
    this->chance_to_PassDamage = GameSettings::Orc::Protection::CHANCE_TO_PASS_DAMAGE;
    this->mana_resistance = GameSettings::Orc::Protection::MANA_RESISTANCE;
}
