#include "Wild_Shape_Druid.h"

#include "../MainGameLogic/Constants_Game.h"

Wild_Shape_Druid::Wild_Shape_Druid() {
    this->CHANCE_TO_VAMPIRISM = GameSettings::Druid::WildShape::CHANCE_TO_VAMPIRISM;
    this->MANA_COST = GameSettings::Druid::WildShape::MANA_COST;
    this->ROUND_DURATION = GameSettings::Druid::WildShape::ROUND_DURATION;
    this->ADDED_DAMAGE = GameSettings::Druid::WildShape::ADDED_DAMAGE;
    this->MANA_RESISTANCE = GameSettings::Druid::WildShape::MANA_RESISTANCE;
    this->ADDED_HP = GameSettings::Druid::WildShape::ADDED_HP;

}
