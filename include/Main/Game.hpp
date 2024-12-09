#pragma once
#include "D:\Pokemon\include\Pokemon\Grass.hpp"
#include "D:\Pokemon\include\Pokemon\PokemonType.hpp"
#include "D:\Pokemon\include\Pokemon\Pokemon.hpp"


class Player;

class Game {
private:
  Grass forestGrass;
public:
    Game() {
        // Create a sample grass environment with actual Pokemon objects
        forestGrass = { "Forest",
            { Pokemon("Pidgey", PokemonType::NORMAL, 40, 7),
            Pokemon("Caterpie", PokemonType::BUG, 35, 5),
            Pokemon("Zubat", PokemonType::POISON, 30, 8) },
            70 };
    }
  void gameLoop(Player &player);
  void visitPokeCenter(Player &player); 
};