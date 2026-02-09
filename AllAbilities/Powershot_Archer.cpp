#include "Powershot_Archer.h"
#include "../MainGameLogic/Constants_Game.h"

Powershot_Archer::Powershot_Archer() {
    this->duration = GameSettings::Archer::Powershot::ROUND_DURATION;
    this->damage = GameSettings::Archer::Powershot::DAMAGE;
    this->manaCost = GameSettings::Archer::Powershot::MANA_COST;
    this->Chance_To_DoubleDamage = GameSettings::Archer::Powershot::CHANCE_TO_DOUBLE_DAMAGE;

}

