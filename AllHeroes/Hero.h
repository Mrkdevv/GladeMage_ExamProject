#ifndef GLADEMAGE_EXAM_HERO_H
#define GLADEMAGE_EXAM_HERO_H
#include "string"

class Hero {
    public:
    std::string name;
    int hp;
    int maxHp;
    int mana;
    int damage;

    virtual ~Hero(); // virtual это для того чтоб прогрмама понимала чьи методы нужно испольщовать

};


#endif //GLADEMAGE_EXAM_HERO_H