#include "Berserker_Orc.h"
#include "../MainGameLogic/Constants_Game.h"

Berserker_Orc::Berserker_Orc() {
    this->healthCost = GameSettings::Orc::Berserker::HEALTH_COST;
    this->addedDamage = GameSettings::Orc::Berserker::ADDED_DAMAGE;
    this->duration = GameSettings::Orc::Berserker::ROUND_DURATION;
    this->vampirismChance = GameSettings::Orc::Berserker::CHANCE_TO_VAMPIRISM;

}
