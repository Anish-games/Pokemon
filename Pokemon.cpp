#include <iostream>
using namespace std;

enum class PokemonChoice {
    Charmander,
    Bulbasaur,
    Squirtle,
    InvalidChoice
};

enum class PokemonType {
    Fire,
    Grass,
    Water,
    Unknown
};

int main() {
    string Player_name;
    PokemonChoice chosen_pokemon = PokemonChoice::InvalidChoice;

    cout << "Welcome to POKEMON, Please enter your name: ";
    cin >> Player_name;
    cout << "                                            Hello, " << Player_name << "! " << endl;
    cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>OoO<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< " << endl;
    cout << "🌟 Your Pokemon adventure begins now! 🌟" << endl;
    cout << "                                          " << endl;
    cout << "In the world of Pokemon, you'll encounter many wild creatures, battle fierce opponents, and capture your very own Pokemon team." << endl;
    cout << "Remember, every challenge is an opportunity to become a better trainer. Trust in your Pokemon, believe in yourself, and embark on this exciting journey!" << endl;
    cout << "Let's get started, " << Player_name << ". The world of Pokémon awaits you!" << endl;
    cout << "✨ Good luck, and may you become the ultimate Pokemon Master! ✨" << endl;
    cout << "                                          " << endl;
    // Professor Oak's Welcome and Pokémon Selection 
    cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>OoO<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< " << endl;
    cout << "                                          " << endl;
    cout << "\n Hello there! Welcome to the world of Pokemon!" << endl;
    cout << "                                          " << endl;
    cout << "My name is Oak! People call me the Pokemon Professor." << endl;
    cout << "                                          " << endl;
    cout << "This world is inhabited by creatures called Pokémon! For some people, Pokemon are pets. Others use them for battles." << endl;
    cout << "                                          " << endl;
    cout << "As for myself... I study Pokemon as a profession." << endl;
    cout << "                                          " << endl;
    cout << "But first, tell me a little about yourself." << endl;
    cout << "                                          " << endl;
    cout << "Right, " << Player_name << "! Your very own Pokemon legend is about to unfold!" << endl;
    cout << "                                          " << endl;
    cout << "A world of dreams and adventures with Pokemon awaits! Let's go!" << endl;
    cout << "                                          " << endl;
    cout << "\nBut first, here, I have three Pokemon for you to choose from." << endl;
    cout << "                                          " << endl;
    cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>OoO<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< " << endl;
    cout << "                                          " << endl;
    cout << "You can choose one of these three to start your journey with." << endl;
    cout << "                                          " << endl;
    cout << "\n1. Bulbasaur - the Grass/Poison type." << endl;
    cout << "2. Charmander - the Fire type." << endl;
    cout << "3. Squirtle - the Water type." << endl;
    cout << "                                          " << endl;
    cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>OoO<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< " << endl;
    cout << "                                          " << endl;
    cout << "So, " << Player_name << ", which Pokemon will you choose?";
    cout << "                                          " << endl;
    int choice;
    cout << "Enter your Pokemon's number: ";
    cin >> choice;
    cout << "                                          " << endl;
    switch (choice) {
    case 1:
        chosen_pokemon = PokemonChoice::Bulbasaur;
        break;
    case 2:
        chosen_pokemon = PokemonChoice::Charmander;
        break;
    case 3:
        chosen_pokemon = PokemonChoice::Squirtle;
        break;
    default:
        chosen_pokemon = PokemonChoice::InvalidChoice;
        break;
    }
    switch (chosen_pokemon) {
    case PokemonChoice::Charmander:
        cout << "Professor Oak: A fiery choice! Charmander is yours!\n";
        break;
    case PokemonChoice::Bulbasaur:
        cout << "Professor Oak: A fine choice! Bulbasaur is always ready to grow on you!\n";
        break;
    case PokemonChoice::Squirtle:
        cout << "Professor Oak: Splendid! Squirtle will keep you cool under pressure!\n";
        break;
    default:
        cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose for you...\n";
        chosen_pokemon = PokemonChoice::Charmander; // Default to Charmander if invalid choice
        cout << "Professor Oak: Just kidding! Let's go with Charmander, the fiery dragon in the making!\n";
        break;
    }

    // Concluding the first chapter
    cout << "Professor Oak: " << (chosen_pokemon == PokemonChoice::Charmander ? "Charmander" : chosen_pokemon == PokemonChoice::Bulbasaur ? "Bulbasaur" : "Squirtle")
        << " and you, " << Player_name << ", are going to be the best of friends!\n";
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";

   
}
