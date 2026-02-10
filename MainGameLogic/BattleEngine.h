#ifndef GLADEMAGE_EXAM_STARTGAMEENGINE_H
#define GLADEMAGE_EXAM_STARTGAMEENGINE_H
#include <string>
#include "..\AllHeroes/Hero.h"
#include "../AllHeroes/Orc.h"
#include "../AllHeroes/Archer.h"
#include "../AllHeroes/Druid.h"
#include "../AllHeroes/Mage.h"
#include "../AllHeroes/SwordMan.h"



class BattleEngine {
public:
    std::string FirstPlayerName;
    std::string SecondPlayerName;

    Hero* p1 = nullptr;
    Hero* p2 = nullptr;

    void PlayersName(int num, std::string &nameTarget);
    void PlayersHeroChoose(std::string PlayerName, Hero* &Target);

    void StartFight();
    void PlayerTurn(Hero* attaker , Hero* victim , std::string AttackerName);


    ~BattleEngine() {
        delete p1;
        delete p2;
    }
};


#endif //GLADEMAGE_EXAM_STARTGAMEENGINE_H