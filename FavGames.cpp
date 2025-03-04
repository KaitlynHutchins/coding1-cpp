
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int gameCount = 0;
	string games[50] = { "" };

	cout << "Hello! We are creating a list of favorite games.\n";						// Welcomes player to the program

	for (int i = 0; i < 50; i++) {												//start of the for loop
		string input = "";

		cout << "What would you like to do? Type 'quit' to quit\n";						// asks what they player would like to do
		cin >> input;

		if (input == "quit" || input == "Quit") {										// checks fail case
			break;
		}

		if (input == "add" || input == "Add") {											 // Adds input to array
			cout << "Would you like to bulk add? Type 'yes' or 'no'\n";					// Asks if player wants bulk add
			cin >> input;

			if (input == "yes" || input == "Yes") {										// Begins bulk add
				for (int j = 0; j < 50; j++) {
					cout << "What game would you like to add? Type 'quit' to quit\n";
					cin >> input;

					if (input == "quit" || input == "Quit") {							// Exits bulk add
						break;
					}
					else {																// Adds input to array and updates gameCount
						games[gameCount] = input;
						gameCount++;
						cout << "You have added " << input << " to the list\n";
					}
				}
			}
			else {																		// Adds individual game and updates gameCount
				cout << "What game would you like to add?\n";
				cin >> input;

				games[gameCount] = input;
				gameCount++;
				cout << "You have added " << input << " to the list\n";

			}
		}

		if (input == "edit" || input == "Edit") {								// edits the names in the game list
			bool test = false;													// keeps track of if the game is found in the list

			cout << "What game would you like to edit?\n";
			cin >> input;

			for (int j = 0; j <= gameCount; j++) {							// searches for input game
				if (games[j] == input) {										 // Checks input against names in the list, 
					cout << "What would you like to change it to?\n";			// if found it changes the name
					cin >> input;		
					games[j] = input;
					test = true;												// updates to true to mark that game has been found
				}
			}

			 if (test == false) {												// checks if game has been found,
				cout << "Game was not found\n";									// if not asks user if they want to add it
				cout << "Would you like to add it now?\n";

				string answer = "";
				cin >> answer;

				if (answer == "yes") {
					games[gameCount] = input;
					gameCount++;
					cout << "You have added " << input << " to the list\n";
					}
				else {
					continue;
				}
			 }
			
		}

		if (input == "remove" || input == "Remove") {							// Removes a name from the list
			bool test = false;													// keeps track of if the name is found
			cout << "What name would you like to remove?\n";
			cin >> input;

			for (int j = 0; j <= gameCount; j++) {								// searches for the name and removes it if found
				if (games[j] == input) {
					games[j] = "0";
					test = true;
				}
			}
			if (test == false) {
				cout << "Game was not found\n";
			}
			
		}

		if (input == "show" || input == "Show") {							// Prints all names in the list skipping names that have been removed
			for (int j = 0; j < gameCount; j++) {
				if (games[j] == "0") {
					continue;
				}
				else {
					cout << games[j] << "\n";
				}
			}
		}

	}

}
// FavGames Homework psuedo code
/*
	setup
		int gameCount = 0;
		string games[size];
	Start loop

	0. Greet player and ask for input

	1. Add
		ask player "What name they want to add"
		get input
		add that name to the array and increment gamecount
		(optional) tell player what name they've added
		(optional) bulk add
			ask player "if they want to bulk add names"
				get input
					if yes



	2. Edit.
		ask the player "what name they want to edit"
		get input
		search the array for the input
			if we find the name
				ask player "what name do you want it to be"
				get input
				add edited name into array in the same place as the name was found in
			if we do not find the name
				tell the player "name was not found"
				ask the player if they want to add it now
					get input
						if yes
							add name to the array at gameCount and increment
				go back to start of loop -> 'continue'

	3. Remove
		ask player "what name they want to remove"
		get input
		search the array for the input
			if we find the name
				set value at the spot where name is to empty
			if we do not find the name
				tell player "name not found"
				go back to start of loop -> 'continue'

			(optional) use a funtion to bump names after a deletion up for no empty spaces
	4. Show
		print all names
			for loop
			check if current spot is empty
				if empty
					skip -> can use 'continue' as seen above
				else
					print name
		go back to start of loop -> 'continue'
	5. Quit
		break out of the loop

*/



