#pragma once
#include "D:\Pokemon\include\Battle\BattleState.hpp"
class Player;
class Pokemon;

namespace N_Battle{

class BattleManager {
public:
    void startBattle(N_Player::Player& player, N_Pokemon::Pokemon& wildPokemon);
private:
    BattleState battleState;

    void battle();
    void handleBattleOutcome();
    void updateBattleState();
};
}