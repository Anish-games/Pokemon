#pragma once
#include "D:\Pokemon\include\Main\Game.hpp"
#include "D:\Pokemon\include\Character\Player.hpp"
//#include "D:\Pokemon\include\Pokemon\PokemonChoice.hpp"
//#include "D:\Pokemon\include\Pokemon\PokemonType.hpp"
#include "D:\Pokemon\include\Character\ProfessorOak.hpp"
//#include "D:\Pokemon\include\Utility\Utility.hpp"
#include <iostream>
#include <limits> // Include this header to use std::numeric_limits
#include <string>

int main() {

    N_Character::ProfessorOak* professor = new N_Character::ProfessorOak("Professor Oak");
    N_Character::N_Player::Player* player = new N_Character::N_Player::Player;
    // Continue with the main flow of the game
    

   // Greet the player and offer Pokemon choices
    professor->greetPlayer(*player);
    professor->offerPokemonChoices(*player);

    // Explain the main quest
    professor->explainMainQuest(*player);

    // Start the main game loop

    N_Main::Game* game = new N_Main:: Game;
    //N_Main::Game game;
    game->gameLoop(*player);

    return 0;
}
