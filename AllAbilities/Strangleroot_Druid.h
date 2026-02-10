#ifndef GLADEMAGE_EXAM_STRANGLEROOT_DRUID_H
#define GLADEMAGE_EXAM_STRANGLEROOT_DRUID_H
#include <string>

class Strangleroot_Druid {
    public:
    std::string name;
    int MANA_COST;
    int DAMAGE;
    int ROUND_DURATION;
    int CHANCE_TO_DoubleDamage;
    int CHANCE_TO_PassDamage;

    Strangleroot_Druid();
};


#endif //GLADEMAGE_EXAM_STRANGLEROOT_DRUID_H