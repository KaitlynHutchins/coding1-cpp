#include <iostream>		//This sends and recieves text from the console.
#include <string>		//allows us to use the string variable type.
#include <cstdlib>		// for rand() and srand()
#include <ctime>		//for time(0)
						

using namespace std;	//adds a lot of bloat, but keeps us from typing "std::" all the time.

//This is where the program starts running

int main() {
	//always seed your random number generator ONCE, at the beginning of your program.
	srand(time(0));					// seeding the number generator


	bool debug = true;				// turn this to false before shipping.

	if (debug) cout << "DEBUG MODE IS ON\n";

	cout << "This is the start of Week 3's lecture on \n";
	cout << "\tVariables and Logic!\n";

	// An if statement is a test.
	// if the test is true the code block runs.
	// if the test is false, of NOT true, the code block does NOT run.
// if(test) { code block}

	if (true) {
		cout << "This line of code will always run\n";
	}	//End  of if(true).

	if (false) {
		cout << "This line of code will never run\n";
	} //End of if(false).

	if (1 + 1 == 2) {
		cout << "Thank goodness! Math still makes sense.\n";
	}	// End of if(1+1).

	if (1 + 3 == 5) {
		cout << "This is bad science.\n";
	}	// End of if(1+3).

	//	Let's talk abot variables
	//	integers, floats, doubles, characters, strings, and booleans

	// An integer is a whole number, positive or negative, between -2bil and 2bil
	// when creating a variable, specify type, name, and optionally, value. (allways assign a value).

	// we are creating a new variable with the type "int", with name "playerScore",
	// with a value of 4550.
	int playerScore = 4550;
	
	//declaring (and defining) the variable, type int, name= playerTwoScore;
	int playerTwoScore = 0;
	// constant variables cannot change their value and must be defined at creation
	const float EARTH_GRAVITY = -9.81f;		// acceleration in meters/second

	cout << "Player 1 score = " << playerScore << ".\n";
	cout << "Player 2 score = " << playerTwoScore << ".\n";
	cout << "Earth's Gravity is " << EARTH_GRAVITY << " meters/second.\n";

	// a float is a floating point number accurate to 7 digits.
	// that means 9,999,999 or 0.000001
	
	// a double is accurate to 22 digits.
	//9,999,999,999,999,999,999,999
	//we are creating a constant variable of the type double
	// names PI, with the value of 3.14159...
	const double PI = 3.1415926535897932385;

	// a character is a single unicode blah blah blah. one key on your keyboard.
	char answer = 'n';			//This stores user input

	cout << "Would you like to keep playing?\n";	//Asks the user a question
	cin >> answer;									//get input from the player

	if (answer == 'y') {							//test the input
		cout << "Hurray! Let's go again.\n";		//print text
	}
	else {											//if the test was false, do this
		cout << "Thanks for playing!\n";			//print text
		return 0;									//quit the program early.
	}	

	// strings are and array of characters, in an ordered list, one after the other.
	string profName = "Dumbledore";
	string user = "BMO";
	string pass = "videogames";
	string input = "";

	cout << "What is your username?\n";
	cin >> input;

	if (input == user) {							// What is this doing?
													// why the double equals?
		cout << "What is your password?\n";
		cin >> input;
		if (input == pass) {
			cout << "Hello Bmo! Proffessor " << profName << " has a question for you.\n";
			return 0;
		}
		else {
			cout << "Wrong password. Nice try, Jake!\n";
		}
	}
	else {
		cout << "Username not recognized.\n";
	}

	// booleans are a variable type that can only be true or false. yes/no, on/off, etc.
	bool playerIsAlive = true;

	//this is the simplest of loops.
	//it runs as long as the test is true.
	//while(test) { code block}

	int score = 0;

	if (debug) cout << "score = " << score << endl;

	while (playerIsAlive) {
	
		cout << "Are you dead yet?\n";
		cin >> input;
		 
		score += 5;					// combined assignment operator
										// this adds 5 to the value of score.

		//build an if statement
		//if player says "yes"
		// make playerIsAlive = false;
		if (debug) cout << "score = " << score << endl;

		if (input == "yes") {
			playerIsAlive = false;		// This will make the loop STOP
		}
	
	}
	if (debug) cout << "score = " << score << endl;

	cout << "Welcome to valhalla!\n";
	cout << "Your score is " << score << ".\n";

	// let's talk about random. 10 minutes is enough time.
	// at the top of your source file.
	// #include <cstdlib>		//for rand and srand()
	// #inlcude <ctime>			// for time
	// at the top of main(): srand(time(0)))

	cout << "Here is a random number: " << rand() << ".\n";

	cout << "Here are ten random numbers: \n";
	int count = 0;
	while (count < 10) {
		count += 1;					//add one to the count
		cout << (rand() % 10) + 1<< "\n";		// display a random number
	}
}	//This is the end of main()