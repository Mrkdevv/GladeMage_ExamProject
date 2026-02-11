//
// Created by dedus on 06.02.2026.
//

#ifndef GLADEMAGE_EXAM_SWORDMAN_H
#define GLADEMAGE_EXAM_SWORDMAN_H
#include "../AllAbilities/Slashing_Lunge_SwordMan.h"
#include "../AllAbilities/Sword_Lunge_SwordMan.h"
#include "Hero.h"

class SwordMan : public Hero {
    public:
    SwordMan();
    Slashing_Lunge_SwordMan Slashing_Lunge;
    Sword_Lunge_SwordMan Sword_Lunge;
    void ShowAbilities();
    void FirstAbility(Hero* target);
    void SecondAbility(Hero* target)
};


#endif //GLADEMAGE_EXAM_SWORDMAN_H