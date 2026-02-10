#ifndef GLADEMAGE_EXAM_WILD_SHAPE_DRUID_H
#define GLADEMAGE_EXAM_WILD_SHAPE_DRUID_H
#include <string>

class Wild_Shape_Druid {
    public:
    std::string name;
    int MANA_COST;
    int ADDED_DAMAGE;
    int ADDED_HP;
    int ROUND_DURATION;
    int CHANCE_TO_VAMPIRISM;
    int MANA_RESISTANCE;
    Wild_Shape_Druid();
};


#endif