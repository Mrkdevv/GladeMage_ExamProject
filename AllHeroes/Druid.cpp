#include "Druid.h"
#include "../MainGameLogic/Constants_Game.h"
#include <iostream>
Druid::Druid() {
    this->health =GameSettings::Druid::HP;
    this->maxhealth =GameSettings::Druid::HP;
    this->damage =GameSettings::Druid::DAMAGE;
    this->mana = GameSettings::Druid::MANA;

    Strangleroot_Druid.name = "Strangleroot_Druid";
    Wild_Shape_Druid.name = "Wild_Shape_Druid";
}
void  Druid::ShowAbilities()
{
    std::cout << "1) " << Strangleroot_Druid.name << "\n2) " <<Wild_Shape_Druid.name << std::endl;
}
