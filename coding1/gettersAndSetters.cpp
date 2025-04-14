// Kaitlyn Hutchins
// Getters and Setters

#include <iostream>
#include <string>

using namespace std;

// Use the class keyworkd to create a class named "robot"
// don't forget the semi-colon after the curly braces.
class robot {
private:			// Only I can see this, call this, change this.


	// Data Members
	string name;
	string phrase;		// phrases include punctuation
	int charge;
	int maxCharge = 100;
	int minCharge = 100;


	// Member Functions
	// function declarations, to be defined later.
	// functon declarations don't require parameter names
	
	/*
	robot(string, string, int);
	robot();
	void SayHello();
	*/

public:
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
		ChangeCharge();				// This task was not very expensive on our charge.
	}

	
	// Setters and Getters give access to private variables
	// through whatever tessts we want to write
		
	// SetCharge clamps charge to a range 0-100 (inclusive)
	// Setters will always have an input parameter
	void SetCharge(int givenCharge) {
		if (givenCharge < 0) {
			charge = 0;
		}
		else if (givenCharge > 100) {
			charge = 100;
		}
		else {
			charge = givenCharge;
		}
	} 

	void ChangeCharge(int by = -1) {
		charge += by;
		SetCharge(charge);			// for clamping charge.
	}

	// Getters will always have a return type
	int GetCharge() {
		return charge;
	}

	void SetName(string givenName) {
		if (givenName.size() < 2) {
			cout << "Name is too short!\n";
			return;				// returning nothing out of a void funtion to end the function.
		}
		else if (givenName.size() > 20) {
			cout << "Name is too long!\n";
			return;

		}
		else {
			name = givenName;
		}
	}

	string GetName() {
		return name;
	}

	// no need to let people set the phrase
	// or hear it! The robot gets to be in charge of when they say thaat.


protected:

};




int main() {
	robot bobert;				// constructor runs here.
	bobert.SetName("Bobert Junior");
	bobert.SetCharge(5);

	cout << "Have a look at my new robot! Thier name is " << bobert.GetName() << ".\n";
	cout << "I am currently charging them, thier charge is " << bobert.GetCharge() << ".\n";

	bobert.ChangeCharge(50);
	cout << "two hours laters, boberts charge is now " << bobert.GetCharge() << ".\n";

	robot rob("Roberto", "I can fix anything!", 25);

	cout << "My new robot was very expensive! They works on the nuclear reactor.\n";
	cout << "They can introduce themselves, watch!\n";
	rob.ChangeCharge(-200);				// nuclear reactor sapped all energy
	rob.SayHello();

	bobert.SayHello();



	return 0;
}