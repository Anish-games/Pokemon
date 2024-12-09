#pragma once
#include "D:\Pokemon\include\Battle\BattleState.hpp"
#include "D:\Pokemon\include\Character\Player.hpp"
namespace N_Battle
{
    class Pokemon;

    using namespace N_Character::N_Player;

    class BattleManager {
    public:
        void startBattle(Player& player, N_Pokemon::Pokemon& wildPokemon);
    private:
        BattleState battleState;

        void battle();
        void handleBattleOutcome();
        void updateBattleState();
    };
}