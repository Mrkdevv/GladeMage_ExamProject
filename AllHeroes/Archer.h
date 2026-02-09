//
// Created by dedus on 06.02.2026.
//

#ifndef GLADEMAGE_EXAM_ARCHER_H
#define GLADEMAGE_EXAM_ARCHER_H
#include "../AllAbilities/Hail_of_arrows_Archer.h"
#include "../AllAbilities/Powershot_Archer.h"
#include "Hero.h"

class Archer : public Hero{
public:
    Archer();
    Hail_of_arrows_Archer HailOfArrows;
    Powershot_Archer Powershot;
};

#endif //GLADEMAGE_EXAM_ARCHER_H