#include <iostream>
#include<string>
using namespace std;

enum class PokemonChoice {
    Charmander,
    Bulbasaur,
    Squirtle,
    Pikachu
};

enum class PokemonType {
    Fire,
    Grass,
    Water,
    Electric
};
class Pokemon 
{
public:
    
    string name;
    PokemonType type;
    int health;

    
    Pokemon() 
    {

    }

    Pokemon(string p_name, PokemonType p_type, int p_health) {
        name = p_name;
        type = p_type;
        health = p_health;
    }

    
    void attack() 
    {
        cout << name << "attacks with a powerful move!\n"; 
    }
};

class Player
{
    public:

    string name; 
    Pokemon chosenPokemon;

    void choosenPokemon(int choice)
    {
        switch ((PokemonChoice)choice)
        {
        case PokemonChoice::Charmander:
                chosenPokemon = Pokemon("Charmander ", PokemonType::Fire, 100);
                break;
        case PokemonChoice::Bulbasaur:
            chosenPokemon = Pokemon("Bulbasaur ", PokemonType::Grass, 100);
            break;
        case PokemonChoice::Squirtle:
            chosenPokemon = Pokemon("Squirtle ", PokemonType::Water, 100);
            break;
        default:
            chosenPokemon = Pokemon("Pikachu ", PokemonType::Electric, 100);
            break;
            
        }
        cout << "Player " << name << " choice " << chosenPokemon.name << endl;

    }

};

class ProfessorOak    ///////////////////////////////// Greet the player
{
    public:
    string name;

    void greetPlayer(Player& player)
    {
        cout << name << ": Hello there! Welcome to the world of Pokemon!\n";
        cout << name << ": My name is Oak. People call me the Pokemon Professor!\n";
        cout << name << ": But enough about me. Let's talk about you!\n";
    }
    void offerPokemonChoices(Player& player)
    {
        cout << name << ": First, tell me, what’s your name?\n";
        cin.ignore();
        getline(cin, player.name);
        cout << name << ": Ah, " << player.name << "! What a fantastic name!\n";
        cout << name << ": You must be eager to start your adventure. But first, you’ll need a Pokemon of your own!\n";
        cout << name << ": I have three Pokemon here with me. They’re all quite feisty!\n";
        cout << name << ": Choose wisely...\n";
        cout << "1. Charmander - The fire type. A real hothead!"<<endl; //////////////// option
        cout << "2. Bulbasaur - The grass type. Calm and collected!"<<endl;
        cout << "3. Squirtle - The water type. Cool as a cucumber!"<<endl;

        int choice;
        cout << "so " << name << ", which one will it be? Enter the number of your choice: ";
        cin >> choice;
        player.choosenPokemon(choice);

    }


};

int main() 
{
    ProfessorOak professor;
    Pokemon placeholderPokemon;
    Player player;

    
    placeholderPokemon.name = "Pikachu";
    placeholderPokemon.type = PokemonType::Electric;
    placeholderPokemon.health = 40;

   
    player.name = "Trainer";

    
    professor.name = "Professor Oak";

    
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    
    cout << "Professor Oak: " << player.chosenPokemon.name << " and you, " << player.name << ", are going to be the best of friends!\n";
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";
    
   
}
