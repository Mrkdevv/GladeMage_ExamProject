//
// Created by dedus on 07.02.2026.
//

#include "Sword_Lunge_SwordMan.h"

#include "../MainGameLogic/Constants_Game.h"

Sword_Lunge_SwordMan::Sword_Lunge_SwordMan() {
    this->CHANCE_TO_DOUBLE_DAMAGE = GameSettings::SwordMan::SwordLunge::CHANCE_TO_DOUBLE_DAMAGE;
    this->DAMAGE = GameSettings::SwordMan::SwordLunge::DAMAGE;
    this->CHANCE_TO_PASS_DAMAGE = GameSettings::SwordMan::SwordLunge::CHANCE_TO_PASS_DAMAGE;
    this->MANA_COST = GameSettings::SwordMan::SwordLunge::MANA_COST;
    this->ROUND_DURATION = GameSettings::SwordMan::SwordLunge::ROUND_DURATION;


}
