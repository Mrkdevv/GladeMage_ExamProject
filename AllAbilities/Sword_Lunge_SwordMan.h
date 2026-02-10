#ifndef GLADEMAGE_EXAM_SWORD_LUNGE_SWORDMAN_H
#define GLADEMAGE_EXAM_SWORD_LUNGE_SWORDMAN_H
#include <string>

class Sword_Lunge_SwordMan {
    public:
    std::string name;
    int MANA_COST;
    int DAMAGE;
    int ROUND_DURATION;
    int CHANCE_TO_PASS_DAMAGE;
    int CHANCE_TO_DOUBLE_DAMAGE;
    Sword_Lunge_SwordMan();
};


#endif //GLADEMAGE_EXAM_SWORD_LUNGE_SWORDMAN_H