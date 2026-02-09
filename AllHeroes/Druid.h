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
    Wild_Shape_Druid wild_shape;
    Strangleroot_Druid strangleroot;



};


#endif //GLADEMAGE_EXAM_DRUID_H