#include "SwordMan.h"
#include "../MainGameLogic/Constants_Game.h"

SwordMan::SwordMan() {
    this->health =GameSettings::SwordMan::HP;
    this->maxhealth =GameSettings::SwordMan::HP;
    this->damage =GameSettings::SwordMan::DAMAGE;
    this->mana =GameSettings::SwordMan::MANA;
}
