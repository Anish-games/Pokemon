#pragma once
#include "D:\Pokemon\include\Pokemon\Grass.hpp"
#include "D:\Pokemon\include\Pokemon\PokemonType.hpp"
#include "D:\Pokemon\include\Pokemon\Pokemon.hpp"
namespace N_Main{

class Player;

class Game {
private:
    N_Pokemon::Grass forestGrass;
public:
    Game() {
        // Create a sample grass environment with actual Pokemon objects
        forestGrass = { "Forest",
            { N_Pokemon::Pokemon("Pidgey", N_Pokemon::PokemonType::NORMAL, 40, 7),
            N_Pokemon::Pokemon("Caterpie", N_Pokemon::PokemonType::BUG, 35, 5),
            N_Pokemon::Pokemon("Zubat", N_Pokemon::PokemonType::POISON, 30, 8) },
            70 };
    }
  void gameLoop(N_Player::Player &player);
  void visitPokeCenter(N_Player::Player &player);
};
}