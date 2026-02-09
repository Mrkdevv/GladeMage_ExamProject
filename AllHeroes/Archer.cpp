#include "Archer.h"
#include "../MainGameLogic/Constants_Game.h"

Archer::Archer() {
    this->health =GameSettings::Archer::HP;
    this->maxhealth =GameSettings::Archer::HP;
    this->damage =GameSettings::Archer::DAMAGE;
    this->mana = GameSettings::Archer::MANA;
};
