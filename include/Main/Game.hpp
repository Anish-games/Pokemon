#pragma once
#include "D:\Pokemon\include\Pokemon\Grass.hpp"
#include "D:\Pokemon\include\Character\Player.hpp"

// class Player;
namespace N_Main
{
    using namespace N_Pokemon;
    using namespace N_Character::N_Player;

    class Game {
    private:
        Grass forestGrass;
    public:
        Game();
        void gameLoop(Player& player);
        void visitPokeCenter(Player& player);
    };
}