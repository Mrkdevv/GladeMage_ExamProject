//
// Created by dedus on 06.02.2026.
//

#ifndef GLADEMAGE_EXAM_DRUID_H
#define GLADEMAGE_EXAM_DRUID_H
#include "../AllAbilities/Wild_Shape_Druid.h"
#include "../AllAbilities/Strangleroot_Druid.h"
#include "Hero.h"


class Druid : public Hero {
    public:
    Druid();
    Strangleroot_Druid Strangleroot_Druid;
    Wild_Shape_Druid Wild_Shape_Druid;
    void ShowAbilities();
    void FirstAbility(Hero* target);
    void SecondAbility(Hero* target);
};


#endif //GLADEMAGE_EXAM_DRUID_H