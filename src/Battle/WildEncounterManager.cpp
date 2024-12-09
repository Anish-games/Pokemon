#pragma once
#include "D:\Pokemon\include\Battle\WildEncounterManager.hpp"
#include "D:\Pokemon\include\Pokemon\Grass.hpp"
#include "D:\Pokemon\include\Pokemon\Pokemon.hpp"
#include <cstdlib> // For rand()
#include <ctime>   // For time()

using namespace N_Battle;

WildEncounterManager::WildEncounterManager() {
	srand(time(0)); // Seed the random number generator
}

N_Pokemon::Pokemon WildEncounterManager::getRandomPokemonFromGrass(const N_Pokemon::Grass& grass) {
	int randomIndex = rand() % grass.wildPokemonList.size();
	return grass.wildPokemonList[randomIndex];
}