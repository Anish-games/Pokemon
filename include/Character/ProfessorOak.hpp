#pragma once
#include <iostream>
namespace N_Character {

class Player;

class ProfessorOak {
public:
	std::string name;

	ProfessorOak(string p_name);
	void greetPlayer(N_Player::Player& player);
	void offerPokemonChoices(N_Player::Player& player);
	void explainMainQuest(N_Player::Player& player);
};
}