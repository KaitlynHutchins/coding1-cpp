// Kaitlyn Hutchins
// Adventure 2.0 Homework Assignment

#include <iostream>
#include <string>
#include<ctime>

using namespace std;

// Global Variables
int health = 25;
int totalTreasure = 0;

// functions

void story() {										// Starts the adventure with context
	cout << "You see a shooting star in the sky and wish for a way to make more money.\n";
	cout << "The next morning you see a flyer about adventuring.\n";
	cout << "The flyer says that if you can beat an enemy or scare it away the enemy often leaves behind a money pouch.\n";
	cout << endl;
}

bool askYesNo(string question) {					// asks player a question and returns true for yes and false for no.
	string answer = "";
	cout << question << " (y/n)\n";
	cout << ">> ";
	getline(cin, answer);

	cout << endl;

	if (answer == "y") {
		return true;
	}
	else {
		return false;
	}
	
}

int rollDie(int sides = 6) {							// simulates a die roll for generating attack, block, and treasure values
	int number = rand() % sides + 1;

	return number;
}

void ending() {
	cout << "\t\tGame Over\n";
	if (health > 0) {
		cout << "Congratulations! You made it home from adventuring in one piece.\n";
		cout << "Your health is " << health << " and your treasure is " << totalTreasure << ".\n";
	}
	else {
		cout << "You have died \n";
		cout << "At the time of your untimely death you had " << totalTreasure << " coins.\n";
	}
}

void adventure() {
	int treasureFound = rollDie(20);
	int block = rollDie();
	int attack = rollDie();

	cout << "You encounter an enemy!\n";
	cout << "The enemy attacks!\n";
	if (block >= attack) {
		totalTreasure += treasureFound;
		cout << "Yay! You blocked the attack. The enemy was scared away.\n";
		cout << "The enemy dropped a coin purse. You found " << treasureFound << " coins.\n";
	}
	else {
		if (attack > health) {
			health = 0;
		}
		else {
			health -= attack;
		}
		cout << "Ouch! The enemy hit you!\n";
		cout << "You took " << attack << " damage.\n";
	}
	cout << "You now have " << totalTreasure << " coins. Your current health is " << health << endl;
	cout << endl;

}



int main() {
	srand(time(0));									// Seeding the random number generator

	story();										// Starts the adventure

	if (askYesNo("Would you like to go on an adventure?")) {
		adventure();

		while (health > 0) {

			if (askYesNo("Would you like to continue adventuring?")) {
				adventure();
			}
			else {
				break;
			}
		}
	}

	ending();

	return 0;
}