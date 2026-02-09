#include "Hail_of_arrows_Archer.h"
#include "../MainGameLogic/Constants_Game.h"

Hail_of_arrows_Archer::Hail_of_arrows_Archer() {
    this->duration = GameSettings::Archer::Hail_of_arrows::ROUND_DURATION;
    this->damage = GameSettings::Archer::Hail_of_arrows::DAMAGE;
    this->manaCost = GameSettings::Archer::Hail_of_arrows::MANA_COST;
    this->Chance_To_PassDamage = GameSettings::Archer::Hail_of_arrows::CHANCE_TO_PASS_DAMAGE;
}
