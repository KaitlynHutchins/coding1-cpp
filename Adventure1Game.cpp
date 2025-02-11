// Adventure1.0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
    string name = "";
    int health = 10;
    int attack = 0;
    int block = 0;
    int turns = 0;
    int maxTurns = 0;
    int healing = 0;

    srand(time(0));                                                 // seeds the random number generator

    cout << "Please enter your name: ";                             // gets player's name and welcomes them
    cin >> name;

    cout << "Welcome, " << name << "!\n";
    cout << endl;


    maxTurns = (rand() % 10) + 1;                                     // sets the maximum nummber of turns to be random between 1 and 10

    cout << "Watch out, " << name << "! A foe approches!\n";
    cout << endl;

    while (health > 0 && turns < maxTurns) {
        char answer = 'a';
        cout << "Remaining turns: " << (maxTurns - turns) << endl;
        attack = (rand() % 4);                                         // generates a random number for attack between 0 and 4
        block = (rand() % 4);                                          // generates a random number for block between 0 and 4

        if (block < attack) {

            if (attack < 2) {                                      // Varies the wording for when the player has been hit based on the attack value
                cout << "You've been barely hit!\n";
            }
            else if (attack < 3) {
                cout << "You've been hit!\n";
            }
            else {
                cout << "You've been hit hard!\n";
            }

            health -= attack;                                           // updates player's health
            if (health <= 0) {                                         // ends the game if the player's health drops below zero
                break;
            }
            else {
                cout << "Remaining health is: " << health << endl;      // prints player's helth
            }

            if (health < 4) {                                           // asks the player to visit the doctor if player's health is less than 4
                cout << "Your health is low! Would you like to visit the doctor? y or n\n";
                cin >> answer;

                if (answer == 'y') {                                       // heals player by a random amount between 1 and 3
                    healing = (rand() % 3) + 1;
                    health = healing;
                    cout << "You have healed " << healing << " points.\n";      // informs player of healing
                }
            }
        }
        else {                                                         // informs player of a blocked attack
            cout << "You successfully blocked the attack!\n";
        }

        turns += 1;                                                     // updates turn counter

        cout << "Would you like to keep playing? y or n\n";             // asks player if they want to continue playing
        cin >> answer;

        if (answer == 'n') {                                            // ends the game
            break;
        }
        cout << endl;
    }

    cout << "Game Over!\n";

    if (health <= 0) {                                          // informs the player of their death
        cout << "You have died.\n";
    }
    else {                                                              // congratulates player on surviving
        cout << "Congratulations! You have survived the encounter!\n";
        cout << "Remaining health: " << health << endl;
    }                                                                   
    cout << "Turns survived: " << turns << endl;                        // inform player of the number of turns they survived
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
