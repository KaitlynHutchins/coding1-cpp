// Kaitlyn Hutchins
// Classes

#include <iostream>
#include <string>

using namespace std;

// Use the class keyworkd to create a class named "robot"
// don't forget the semi-colon after the curly braces.
class robot {
public:				// anyone can see this, call this, change this.
	
	// Data Members
	string name;
	string phrase;		// phrases include punctuation
	int charge;


	// Member Functions
	// function declarations, to be defined later.
	// functon declarations don't require parameter names
	/*
	robot(string, string, int);
	robot();
	void SayHello();
	*/


	// Function Definitions
	// constructor, has to be named same as teh class, and doesn't have a return type
	robot(string givenName, string givenPhrase, int givenCharge) {
		// Assigns this instance's variables to the given values.
		name = givenName;
		phrase = givenPhrase;
		charge = givenCharge;

		// let's us know that this constructor has run.
		cout << "A new robot has been constructed!\n";
	}

	// overloading the constructor with a "default contructor"
	robot() {
		cout << "Using the DEFFAULT constructor.\n";
		cout << "Hey programmer Dean, please fix this in the source code.\n";
	}

	void SayHello() {
		cout << "My name is " << name << " and my charge is " << charge << ".\n";
		cout << phrase << "\n";
	}


private:			// Only I can see this, call this, change this.
protected:

};


int main() {
	robot bobert;				// constructor runs here.
	bobert.name = "Bobert Junior";
	bobert.charge = 5;

	cout << "Have a look at my new robot! Thier name is " << bobert.name << ".\n";
	cout << "I am currently charging them, thier charge is " << bobert.charge << ".\n";

	robot rob("Roberto", "I can fix anything!", 25);

	cout << "My new robot was very expensive! They works on the nuclear reactor.\n";
	cout << "They can introduce themselves, watch!\n";
	rob.SayHello();

	bobert.SayHello();



	return 0;
}