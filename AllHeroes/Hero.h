#ifndef GLADEMAGE_EXAM_HERO_H
#define GLADEMAGE_EXAM_HERO_H
#include "string"

class Hero {
    public:
    std::string name;
    int health;
    int maxhealth;
    int mana;
    int damage;

    virtual ~Hero(); // virtual это для того чтоб прогрмама понимала чьи методы нужно испольщовать
    virtual void ShowAbilities() = 0;
    virtual void FirstAbility(Hero* target) = 0;
    virtual void SecondAbility(Hero* target) = 0;
};


#endif //GLADEMAGE_EXAM_HERO_H