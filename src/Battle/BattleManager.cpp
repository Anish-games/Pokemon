#pragma once
#include "D:\Pokemon\include\Battle\BattleManager.hpp"
#include "D:\Pokemon\include\Character\Player.hpp"
#include "D:\Pokemon\include\Utility\Utility.hpp"
#include <iostream>
namespace N_Battle
{
    using namespace std;
    using namespace N_Utility;

    void BattleManager::startBattle(Player& player, N_Pokemon::Pokemon& wildPokemon) {
        battleState.playerPokemon = player.chosenPokemon;
        battleState.wildPokemon = wildPokemon;
        battleState.playerTurn = true;
        battleState.battleOngoing = true;

        cout << "A wild " << wildPokemon.name << " appeared!\n";
        battle();
    }

    void BattleManager::battle() {
        while (battleState.battleOngoing) {
            if (battleState.playerTurn) {
                battleState.playerPokemon.attack(battleState.wildPokemon);
            }
            else {
                battleState.wildPokemon.attack(battleState.playerPokemon);
            }

            updateBattleState();
            battleState.playerTurn = !battleState.playerTurn;
            N_Utility::Utility::waitForEnter();
        }

        handleBattleOutcome();
    }

    void BattleManager::updateBattleState() {
        if (battleState.playerPokemon.isFainted()) {
            battleState.battleOngoing = false;
        }
        else if (battleState.wildPokemon.isFainted()) {
            battleState.battleOngoing = false;
        }
    }

    void BattleManager::handleBattleOutcome() {
        if (battleState.playerPokemon.isFainted()) {
            cout << battleState.playerPokemon.name
                << " has fainted! You lose the battle.\n";
        }
        else {
            cout << "You defeated the wild " << battleState.wildPokemon.name << "!\n";
        }
    }
}