// Kaitlyn Hutchins April 22, 2025
// playering with multiple files today
// saving and loading files today too.
#include <string>	
#include <iostream>					// For In Out Stream
#include "filemgmt.h"				// import teh extra functions that we have created.
//#include "item.h"

using namespace std;



// read array from file. that's homework
// lets talk about header files and other source files

// create an array of strings named favorites
// let the user add as mamy as they like (up to 100)
// save those favorites to a file


// inclass assignment:
// in a new source file (.cpp) and with a header file (.h)
// create a new class named item with the following variables and fundctions
	// string name, int location, item(), use(), example().

int main() {
	
	

	/*
	cout << "Play Ocarina of Time.\n";


	ReadFromFile();		// edit the file.txt to include 3 line of games to play

	WriteToFile();		// Please confirm that the filew was created on your hard drive
	*/

	// the array of favorites
	string favs[100];
	int nextIndex = 0;
	
	cout << "Type out your favorites:\n";
	while (true) {
		string input;						// to store the user's input
		cout << ">> ";
		getline(cin, input);				// get the user's input

		if (input == "done") {				// check to see if they're done,
			break;							// if so, break out of the loop.
		}	

		favs[nextIndex] = input;			// otherwise, assign the user's input to the array
		nextIndex++;						// add point at teh next element in the array.
	}

	WriteArrayToFile(favs, nextIndex);
	

	string arr[100];
	ReadArrayFromFile(arr);

	for (int i = 0; i < nextIndex;i++) {

		cout << arr[i] << endl;

	}


	return 0;
}