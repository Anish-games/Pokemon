#include "D:/Pokemon/include/Pokemon/Pidgey.hpp"
#include "D:/Pokemon/include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_Pokemons
    {

        using namespace std;

        Pidgey::Pidgey() : Pokemon("Pidgey", PokemonType::NORMAL, 100, 35) {}

        void Pidgey::wingAttackk(Pokemon& target) {
            cout << name << " uses Wing Attack on " << target.name << "!\n";
            target.takeDamage(20);
        }
    }
}