#include "D:/Pokemon/include/Pokemon/Caterpie.hpp"
#include "D:/Pokemon/include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_Pokemons
    {

        using namespace std;

        Caterpie::Caterpie() : Pokemon("Caterpie", PokemonType::BUG, 100, 10) {}

        void Caterpie::bugBite(Pokemon& target) {
            cout << name << "uses Wing Attack on " << target.name << "!\n";
            target.takeDamage(20);
        }   
    }
}