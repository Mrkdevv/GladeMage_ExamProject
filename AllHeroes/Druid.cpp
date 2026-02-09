#include "Druid.h"
#include "../MainGameLogic/Constants_Game.h"

Druid::Druid() {
    this->health =GameSettings::Druid::HP;
    this->maxhealth =GameSettings::Druid::HP;
    this->damage =GameSettings::Druid::DAMAGE;
    this->mana = GameSettings::Druid::MANA;
}
