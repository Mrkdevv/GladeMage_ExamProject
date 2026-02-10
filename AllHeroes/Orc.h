//
// Created by dedus on 06.02.2026.
//

#ifndef GLADEMAGE_EXAM_ORC_H
#define GLADEMAGE_EXAM_ORC_H
#include "../AllAbilities/Berserker_Orc.h"
#include "../AllAbilities/Protection_Orc.h"
#include "Hero.h"

class Orc : public Hero {
    public:
    Orc();
    Berserker_Orc berserker;
    Protection_Orc protection;

    void ShowAbilities();
    void FirstAbility(Hero* target);
    void SecondAbility(Hero* target);
};


#endif //GLADEMAGE_EXAM_ORC_H