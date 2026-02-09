#include "Slashing_Lunge_SwordMan.h"

#include "../MainGameLogic/Constants_Game.h"

Slashing_Lunge_SwordMan::Slashing_Lunge_SwordMan() {
    this->DAMAGE = GameSettings::SwordMan::Slashing_Lunge::DAMAGE;
    this->DURATION = GameSettings::SwordMan::Slashing_Lunge::ROUND_DURATION;
    this->MANA_COST = GameSettings::SwordMan::Slashing_Lunge::MANA_COST;
    this->MANA_RESISTANCE = GameSettings::SwordMan::Slashing_Lunge::MANA_RESISTANCE;
    this->SHANCE_TO_VAMPIRISM = GameSettings::SwordMan::Slashing_Lunge::CHANCE_TO_VAMPIRISM;
}
