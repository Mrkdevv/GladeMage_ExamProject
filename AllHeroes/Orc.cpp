#include "Orc.h"
#include "../MainGameLogic/Constants_Game.h"

Orc::Orc() {
    this->health = GameSettings::Orc::HP;
    this->maxhealth = GameSettings::Orc::HP;
    this->damage = GameSettings::Orc::DAMAGE;
    this->mana = 0;
}
