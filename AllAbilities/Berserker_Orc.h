//
// Created by dedus on 07.02.2026.
//

#ifndef GLADEMAGE_EXAM_BERSERKER_ORC_H
#define GLADEMAGE_EXAM_BERSERKER_ORC_H
#include <string>


class Berserker_Orc {
public:
    std::string name;
    int healthCost;
    int addedDamage;
    int duration;
    int vampirismChance;

    Berserker_Orc();
};


#endif //GLADEMAGE_EXAM_BERSERKER_ORC_H