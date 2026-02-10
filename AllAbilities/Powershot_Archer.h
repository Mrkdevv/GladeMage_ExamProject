#ifndef GLADEMAGE_EXAM_POWERSHOT_ARCHER_H
#define GLADEMAGE_EXAM_POWERSHOT_ARCHER_H
#include <string>

class Powershot_Archer {
    public:
    std::string name;
    int manaCost;
    int duration;
    int damage;
    int Chance_To_DoubleDamage;

    Powershot_Archer();
};


#endif //GLADEMAGE_EXAM_POWERSHOT_ARCHER_H