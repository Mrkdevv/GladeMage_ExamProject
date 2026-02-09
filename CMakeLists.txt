cmake_minimum_required(VERSION 3.28)
project(GladeMage_Exam)

set(CMAKE_CXX_STANDARD 20)

add_executable(GladeMage_Exam MainGameLogic/main.cpp
        AllHeroes/SwordMan.cpp
        AllHeroes/SwordMan.h
        AllHeroes/Mage.cpp
        AllHeroes/Mage.h
        AllHeroes/Archer.cpp
        AllHeroes/Archer.h
        AllHeroes/Orc.cpp
        AllHeroes/Orc.h
        AllHeroes/Druid.cpp
        AllHeroes/Druid.h
        AllAbilities/Fireball_Mage.cpp
        AllAbilities/Fireball_Mage.h
        AllAbilities/FrostBite_Mage.cpp
        AllAbilities/FrostBite_Mage.h
        AllAbilities/Hail_of_arrows_Archer.cpp
        AllAbilities/Hail_of_arrows_Archer.h
        AllAbilities/Powershot_Archer.cpp
        AllAbilities/Powershot_Archer.h
        AllAbilities/Berserker_Orc.cpp
        AllAbilities/Berserker_Orc.h
        AllAbilities/Protection_Orc.cpp
        AllAbilities/Protection_Orc.h
        AllAbilities/Strangleroot_Druid.cpp
        AllAbilities/Strangleroot_Druid.h
        AllAbilities/Wild_Shape_Druid.cpp
        AllAbilities/Wild_Shape_Druid.h
        AllAbilities/Sword_Lunge_SwordMan.cpp
        AllAbilities/Sword_Lunge_SwordMan.h
        AllAbilities/Slashing_Lunge_SwordMan.cpp
        AllAbilities/Slashing_Lunge_SwordMan.h
        MainGameLogic/BattleEngine.cpp
        MainGameLogic/BattleEngine.h
        MainGameLogic/Logger_Engine.cpp
        MainGameLogic/Logger_Engine.h
        MainGameLogic/StartGameEngine.cpp
        MainGameLogic/StartGameEngine.h
        MainGameLogic/Constants_Game.h
        AllHeroes/Hero.cpp
        AllHeroes/Hero.h)