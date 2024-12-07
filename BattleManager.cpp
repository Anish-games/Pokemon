#include "BattleManager.hpp"
#include <iostream>
#include "Utility.hpp"

void BattleManager::startBattle(Player& player, Pokemon& wildPokemon)
{
	cout << "A wild " << wildPokemon.name << " appeared!\n";
	battle(player.chosenPokemon, wildPokemon);
}

void BattleManager::battle(Pokemon& playerPokemon, Pokemon& wildPokemon)
{
	while (!playerPokemon.isFainted() && !wildPokemon.isFainted())
	{
		playerPokemon.attack(wildPokemon);

		if (wildPokemon.isFainted())
		{
			wildPokemon.attack(playerPokemon);
		}

		Utility::waitForEnter(); // Pause to show the result of each turn
	}
	handleBattleOutcome(playerPokemon, playerPokemon.isFainted());
}

void BattleManager::handleBattleOutcome(Player& player, bool playerWon)
{
	if (playerWon) 
	{
		cout << player.chosenPokemon.name << " is victorious! Keep an eye on your Pokémon's health.\n";
	}
	else {
		cout << "Oh no! " << player.chosenPokemon.name << " fainted! You need to visit the PokeCenter.\n";
		Utility::waitForEnter();
		cout << "Game Over.\n";
	}

}
