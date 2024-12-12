#include "D:/Pokemon/include/Pokemon/Pokemons/Caterpie.hpp"
#include "D:/Pokemon/include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {

        using namespace std;

        Caterpie::Caterpie() : Pokemon("Caterpie", PokemonType::BUG, 100, 10) {}

        void Caterpie::bugBite(Pokemon& target) {
            cout << name << " uses Bug Bite on " << target.name << "!\n";
            target.takeDamage(20);
        }

        void Caterpie::attack(Pokemon& target) {
            bugBite(target); // Call the unique move
        }
    }
}
