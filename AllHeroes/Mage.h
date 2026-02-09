#ifndef GLADEMAGE_EXAM_MAGE_H
#define GLADEMAGE_EXAM_MAGE_H

#include "../AllAbilities/Fireball_Mage.h"
#include "../AllAbilities/FrostBite_Mage.h"
#include "Hero.h"


class Mage : public Hero {
    public:
    Mage();
    Fireball_Mage Fireball;
    FrostBite_Mage Frostbite;
};


#endif //GLADEMAGE_EXAM_MAGE_H