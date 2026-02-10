#ifndef GLADEMAGE_EXAM_FROSTBITE_MAGE_H
#define GLADEMAGE_EXAM_FROSTBITE_MAGE_H
#include <string>

class FrostBite_Mage {
    public:
        std::string name;
        int manaCost;
        int duration;
        int damage;
        int Chance_To_DoubleDamage;

       FrostBite_Mage();
};
#endif //GLADEMAGE_EXAM_FROSTBITE_MAGE_H