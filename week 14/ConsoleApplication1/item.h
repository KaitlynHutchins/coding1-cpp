// header files contain declarations
// source files contain definitions
#pragma once
#include <string>
#include <iostream>

using namespace std;


// inclass assignment:
// in a new source file (.cpp) and with a header file (.h)
// create a new class named item with the following variables and fundctions
	// string name, enum location, item(), use(), example().


/*
	homework
	1. create a function in filemgmt.cpp to read a file into an array.
		a. each new line becomes a new element in the array.
	2. finish the item class
	3. in main, create an array of 5 items and display them with a loop
		a. use itemArra[i].examine() to show all of the details of the item
	4. upload teh folder of files to github
		a. submit a link to the assignment page with the folder in github.com
*/
class item
{
public:
	string name;

	enum Location { GREATHALL, DUNGEON, COURTYARD, MARKET, INVENTORY };


	 Location location;


	item();			// constructor

	void use();				// print statement that says the name of the item and the location
	void examine();			// print statement that says name and location


	
};

