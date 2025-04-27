#include<iostream>
#include <string>
#include "filemgmt.h"
#include "item.h"

using namespace std;

int main() {
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

	item lamp;
	lamp.name = "Head Lamp";
	item sword;
	sword.name = "Excalibur";
	item shield;
	shield.name = "The Awesome Shield";
	item key1;
	key1.name = "The Basement Key";
	item key2;
	key2.name = "The House Key";

	item inventory[5];
	inventory[0] = lamp;
	inventory[1] = sword;
	inventory[2] = shield;
	inventory[3] = key1;
	inventory[4] = key2;

	for (int i = 0; i < 5; i++) {
		inventory[i].examine();
		cout << endl;
	}

	

	return 0;
}