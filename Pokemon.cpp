
#include <iostream>
using namespace std;

int main()
{
    string PlayerName;

    cout << "Welcome to POKEMON, Please enter your name: ";
    cin >> PlayerName;
    cout << "                                            Hello, " << PlayerName << "! " << endl;
    cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>OoO<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< " << endl;
    cout << "🌟 Your Pokemon adventure begins now! 🌟" << endl;
    cout << "                                          " << endl;
    cout << "In the world of Pokemon, you'll encounter many wild creatures, battle fierce opponents, and capture your very own Pokemon team." << endl;
    cout << "Remember, every challenge is an opportunity to become a better trainer. Trust in your Pokemon, believe in yourself, and embark on this exciting journey!" << endl;
    cout << "Let's get started, " << PlayerName << ". The world of Pokémon awaits you!" << endl;
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
    cout << "Right, " << PlayerName << "! Your very own Pokemon legend is about to unfold!" << endl;
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
    cout << "So, " << PlayerName << ", which Pokemon will you choose?";
    cout << "                                          " << endl;
    int choice;
    string chosen_pokemon;
    cout << "Enter your Pokemons number: ";
    cin >> choice;
    cout << "                                          " << endl;
    switch (choice)
    {
    case 1:
        chosen_pokemon = "Bulbasaur";
            cout << "You chose Bulbasaur! A wise choice.\n";
            cout << "                                          " << endl;
    break;
    case 2:
        chosen_pokemon = "Charmander";
        cout << "You chose Charmander! A fiery choice.\n";
        cout << "                                          " << endl;
    break;
    case 3:
        chosen_pokemon = "Squirtle";
        cout << "You chose Squirtle! A cool choice.\n";
        cout << "                                          " << endl;

    default:
        cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose "
            "for you...\n";
        cout << "                                          " << endl;
        chosen_pokemon = "Pikachu"; 
        cout << "Professor Oak: Just kidding! Let's go with Pikachu, the "
            "surprise guest!\n";
        cout << "                                          " << endl;
        break;
    }
   

}