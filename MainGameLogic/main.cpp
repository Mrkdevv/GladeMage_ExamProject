#include <iostream>
using namespace std;
#include "BattleEngine.h"
int main() {
    srand(time(0));
    BattleEngine engine;

    Hero* p1 = nullptr;
    Hero* p2 = nullptr;

    engine.PlayersHeroChoose("Player 1", p1);
    engine.PlayersHeroChoose("Player 2", p2);

    while (p1->health > 0 && p2->health > 0) {
        engine.PlayerTurn(p1, p2, "Player 1");
        if (p2->health <= 0) break;

        engine.PlayerTurn(p2, p1, "Player 2");
        if (p1->health <= 0) break;
    }
    if (p1->health > 0) {
        std::cout << "\nPlayer 1 (" << p1->name << ") IS THE VICTOR!" << std::endl;
    } else {
        std::cout << "\nPlayer 2 (" << p2->name << ") IS THE VICTOR!" << std::endl;
    }

    delete p1;
    delete p2;
}