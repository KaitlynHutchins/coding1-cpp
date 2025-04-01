// Kaitlyn Hutchins 
// All about functions

#include <iostream>
#include <string>

using namespace std;

//When possible - don't use global variables. it's safer. it avoids bugs.
// global variables go at the top, so all the functions can use them.
string proffessor = "Brian";
int currentShirtSizeElement = 0;


// declaring and defining a new function
//	the function must be declared before it is used.
// the function CAN be defined later in the code.
// this function returns nothing.
// this functions name is "sayHello()"
void sayHello() {
	cout << "Hello!\n";
}

void sayGoodbye() {
	cout << "\nGoodbye!\n";
}

// adding two numbers with (parameters)
// parameters go inside the parenthesis
// they are the INPUTS for our function
// we are creating two variables in the input parameter (parenthesis).
void add(int number1 = 2, int number2 = 0 ) {
	cout << "The sum of " << number1 << " and " << number2 << " is ";
	cout << number1 + number2 << ".\n";
}

// overload the add function
// this one adds two floats!
// don't forget to call this function in main()
void add(float firstNum, float secondNum) {
	cout << firstNum << " plus " << secondNum << " equals ";
	cout << firstNum + secondNum << endl;
}

// break your brain before the break,
// overload add() to accept two strings
// using concatenation!
// call with add("apples", "bananas");
void add(string firstWord, string secondWord) {
	cout << firstWord << " plus " << secondWord << " equals ";
	cout << firstWord + secondWord << endl;
}

// return types - the OUTPUT of the function
bool askYN(string question = "y/n?") {

	do {
		cout << question << "(y/n)" << endl;		// ask user the question
		string input;
		getline(cin, input);		// get input from player
		
		if (input == "y") {			// if y, return true
			return true;			// this quits the function
		}
		else if (input == "n") {		// if n, return false
			return false;
		}
		else {							// else, loop again.
			cout << "Please type 'y' or 'n'.\n";
		}

	} while (true);
}


// show array elements function
// doesn't return anything.
// accepts one parameter as a pointer (Sshhhhh you don't know about those yet).
void show(string* array, int arraySize) {
	cout << "Here are the contents of your array: \n";
	for (int i = 0; i < arraySize; i++) {
		cout << array[i] << endl;
	}
}



// create a function that accepts a pointer to an array of strings
// let it add another element, as long as there are spaces.
void addShirtSize(string* array) {
	string input;
	cout << "Please add a shirt size to the array.\n";
	getline(cin, input);

	array[currentShirtSizeElement++] = input;
}


int main() {
	// calling the sayHello() function
	sayHello();
	cout << endl;

	//SETUP
	string playerName = "Kaitlyn";			// local variable
	string shirtSizes[10];				// creating the array of shirtSizes
	addShirtSize(shirtSizes);
	addShirtSize(shirtSizes);
	addShirtSize(shirtSizes);
	show(shirtSizes, currentShirtSizeElement);
	



	add(23, 2);				// when you call the function, you send the two input parameters.
	add();
	add(23);
	cout << endl;

	add(22.2f, 23.5f);
	add(22.0f, 20.0f);		// floats need 'f' after the numbers.
	cout << endl;

	add("eleven", "Two");
	add("Five", "Seven");
	cout << endl;

	if (askYN("Do you like pizza?")) {
		cout << "Let's get some pizza for lunch!\n";
	}
	else {
		cout << "I woudl not care to know you.\n";
	}
	cout << endl;

	string names[3];				// create an array
									// add three names
	names[0] = "Trinity";
	names[1] = "Jillian";
	names[2] = "Selah";

	cout << "Names: \n";

	for (int i = 0; i < 3; i++) {
		cout << "\t" << names[i] << endl;
	}
	cout << endl;

	show(names, 3);
	cout << endl;




	sayGoodbye();
	return 0;
}