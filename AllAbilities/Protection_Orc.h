#ifndef GLADEMAGE_EXAM_PROTECTION_ORC_H
#define GLADEMAGE_EXAM_PROTECTION_ORC_H
#include <string>


class Protection_Orc {
    public:
    std::string name;
    int health_cost;
    int added_damage;
    int duration;
    int chance_to_PassDamage;
    int mana_resistance;

    Protection_Orc();
};


#endif //GLADEMAGE_EXAM_PROTECTION_ORC_H