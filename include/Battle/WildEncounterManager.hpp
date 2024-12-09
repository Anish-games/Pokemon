#pragma once
#include <vector>
namespace N_Battle{

struct Grass;
class Pokemon;

class WildEncounterManager {
public:
    WildEncounterManager();
    N_Pokemon::Pokemon getRandomPokemonFromGrass(const N_Pokemon::Grass& grass);
};
}