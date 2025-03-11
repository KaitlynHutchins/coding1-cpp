// Kaitlyn Hutchins
// Week 8 Recap

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	// seed the random number generator
	srand(time(0));

	cout << "Hello World!\n";

	// ask the player if they prefer cheese or pepperoni pizza.
	// use an if, else if, and else to check their input.
	// have the computer agree or disagree with their choice, or berate them for any other option

	cout << "What's your favorite pizzaa topping - Cheese or Pepperoni?\n";

	string input = "";
	getline(cin, input);

	if (input == "Cheese") {
		cout << "That's my favorite topping too!\n";
	}
	else if (input == "Pepperoni") {
		cout << "Pepperoni is okay.\n";
	}
	else if (input == "Sausage") {
		cout << "Uhhh, okay....cool.\n";
	}
	else {
		cout << "EUGH! how could you like " << input << "?!?! GROSSS!!!\n\n";
	}



	// Guess the number game.
	// Have the computer choose a random number between 1 and 10 (inclusive).
	// Start a while loop
	// ask the player to guess the number
	// getline (cin, input)
	// if(stoi(input) == theNumber) ...
	// if the number is too high, have the computer say "lower!"
	// if the number is too low, have the computer say "higher!"
	// if the number is correct, tell the player, and end the loop.
	// don't forget:
		// #inlcude <cstdlib>
		// #include <ctime>
		// in main(), srand(time(0));

	// (hard mode) have the player pick a number, and let the computer guess

	int computerNumber = (rand() % 10) + 1;
	bool debug = true;												// turn this to false when shipping the game

	while (true) {
		if (debug) {
			cout << "The number is " << computerNumber << ".\n";
		}

		int playerGuess = 0;

		cout << "What is your guess?\n" << "type 'quit' to quit\n";
		getline(cin, input);

		if (input == "quit") {
			cout << "oh, leaving already? See you again, I hope.\n";
			break;
		}

		try {
			playerGuess = stoi(input);
		}
		catch (invalid_argument) {
			cout << "That's not a number, please try again.\n";
			continue;
		}

		if (stoi(input) == computerNumber) {
			cout << "You got it!\n";
			cout << "My number was " << computerNumber << "\n";
			break;
		}

		if (stoi(input) > computerNumber) {
			cout << "Lower!\n";
		}
		else {
			cout << "Higher!\n";
		}

	}

	return 0;
}
