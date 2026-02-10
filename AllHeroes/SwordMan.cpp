#include "SwordMan.h"
#include "../MainGameLogic/Constants_Game.h"
#include <iostream>

SwordMan::SwordMan() {
    this->health =GameSettings::SwordMan::HP;
    this->maxhealth =GameSettings::SwordMan::HP;
    this->damage =GameSettings::SwordMan::DAMAGE;
    this->mana =GameSettings::SwordMan::MANA;
    Slashing_Lunge.name = "Slashing_Lunge";
    Sword_Lunge.name = "Sword_Lunge";

}
void SwordMan::ShowAbilities()
{
    std::cout << "1) " << Slashing_Lunge.name << "\n2) " << Sword_Lunge.name << std::endl;
}
