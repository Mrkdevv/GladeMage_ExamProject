#pragma once


// constexpr быстрее чем constant потмоучто оно известно до запуска програмы а constant нет


namespace GameSettings {
    namespace Orc {
        constexpr int HP = 120;
        constexpr int DAMAGE = 20;

        namespace Berserker {
            constexpr int HEALTH_COST = 40;
            constexpr int ADDED_DAMAGE = 15;
            constexpr int ROUND_DURATION = 1;
            constexpr int CHANCE_TO_VAMPIRISM = 20;
            constexpr int MANA_RESISTANCE = 10;
        }

        namespace Protection {
            constexpr int HEALTH_COST = 20;
            constexpr int ADDED_DAMAGE = 5;
            constexpr int ADDED_HP = 10;
            constexpr int ROUND_DURATION = 1;
            constexpr int CHANCE_TO_PASS_DAMAGE = 15;
            constexpr int MANA_RESISTANCE = 20;
        }
    }

    //--------------------------------------------

    namespace Mage {
        constexpr int HP = 100;
        constexpr int DAMAGE = 10;
        constexpr int MANA = 110;

        namespace Fireball {
            constexpr int MANA_COST = 25;
            constexpr int DAMAGE = 20;
            constexpr int ROUND_DURATION = 1;
            constexpr int CHANCE_TO_DOUBLE_DAMAGE = 10;
        }

        namespace FrostBite {
            constexpr int MANA_COST = 20;
            constexpr int DAMAGE = 10;
            constexpr int ROUND_DURATION = 1;
            constexpr int CHANCE_TO_DOUBLE_DAMAGE = 5;
        }
    }

    //--------------------------------------------

    namespace Archer {
        constexpr int HP = 100;
        constexpr int DAMAGE = 8;
        constexpr int MANA = 100;

        namespace Hail_of_arrows {
            constexpr int MANA_COST = 30;
            constexpr int DAMAGE = 25;
            constexpr int ROUND_DURATION = 1;
            constexpr int CHANCE_TO_PASS_DAMAGE = 30;
        }

        namespace Powershot {
            constexpr int MANA_COST = 20;
            constexpr int DAMAGE = 15;
            constexpr int ROUND_DURATION = 1;
            constexpr int CHANCE_TO_DOUBLE_DAMAGE = 15;
        }
    }

    //--------------------------------------------

    namespace SwordMan {
        constexpr int HP = 100;
        constexpr int DAMAGE = 12;
        constexpr int MANA = 100;

        namespace Slashing_Lunge {
            constexpr int MANA_COST = 18;
            constexpr int DAMAGE = 22;
            constexpr int ROUND_DURATION = 1;
            constexpr int CHANCE_TO_VAMPIRISM = 5;
            constexpr int MANA_RESISTANCE = 15;
        }

        namespace SwordLunge {
            constexpr int MANA_COST = 25;
            constexpr int DAMAGE = 26;
            constexpr int ROUND_DURATION = 1;
            constexpr int CHANCE_TO_PASS_DAMAGE = 10;
            constexpr int CHANCE_TO_DOUBLE_DAMAGE = 20;
        }
    }

    //--------------------------------------------

    namespace Druid {
        constexpr int HP = 105;
        constexpr int DAMAGE = 11;
        constexpr int MANA = 80;

        namespace Strangleroot {
            constexpr int MANA_COST = 20;
            constexpr int DAMAGE = 20;
            constexpr int ROUND_DURATION = 1;
            constexpr int CHANCE_TO_PASS_DAMAGE = 3;
            constexpr int CHANCE_TO_DOUBLE_DAMAGE = 22;
        }

        namespace WildShape {
            constexpr int MANA_COST = 40;
            constexpr int ADDED_DAMAGE = 10;
            constexpr int ADDED_HP = 20;
            constexpr int ROUND_DURATION = 1;
            constexpr int CHANCE_TO_VAMPIRISM = 25;
            constexpr int MANA_RESISTANCE = 40;
        }
    }
}
