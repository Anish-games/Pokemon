#pragma once
#include <D:/Pokemon/include/Pokemon/Pokemon.hpp>

namespace N_Pokemon {
    namespace N_Pokemons {

        class Caterpie : public Pokemon {
        public:
            Caterpie();
            void bugBite(Pokemon& target);
            void attack(Pokemon& target) override; // Override base class function
        };

    }
}
