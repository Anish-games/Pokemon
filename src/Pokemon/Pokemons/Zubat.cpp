#include "D:/Pokemon/include/Pokemon/Pokemons/Zubat.hpp"
#include "D:/Pokemon/include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {

        using namespace std;

        Zubat::Zubat() : Pokemon("Zubat", PokemonType::POISON, 100, 20) {}

        void Zubat::supersonic(Pokemon& target) {
            cout << name << " uses Supersonic on " << target.name << "!\n";
            target.takeDamage(20);
        }

        void Zubat::attack(Pokemon& target) {
            supersonic(target); // Call the unique move
        }

    }
}