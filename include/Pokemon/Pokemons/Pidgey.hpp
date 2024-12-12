#pragma once
#include <D:/Pokemon/include/Pokemon/Pokemon.hpp>

namespace N_Pokemon {
    namespace N_Pokemons {

        class Pidgey : public Pokemon {
        public:
            Pidgey();
            void wingAttack(Pokemon& target);
            void attack(Pokemon& target) override; // Override base class function
        };

    }
}
