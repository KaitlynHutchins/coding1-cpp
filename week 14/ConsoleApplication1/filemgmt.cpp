// Kaitlyn Hutchins
// Week 14

#include "filemgmt.h"
#include <string>


using namespace std;

void ReadFromFile() {

	// this string will hold what the file contains.
	string fileContents;								

	// open the file
	ifstream file("file.txt");

	// for each line in the file, add it to the string

	while (getline(file, fileContents)) {
		cout << fileContents << "\n";
	}

	// close the file so that other programs can use it.
	file.close();

}

void WriteToFile() {
	// opening the "file.txt" file. if it doesn't exist, create it.
	ofstream file("file.txt");

	// write a line to the file... wel, to the buffer of the open file.
	file << "Play Ocarina of Time!\n";

	// close the file (saves it to disk)
	file.close();

}

void ReadArrayFromFile(string fileContents[100]) {

	//opening the "file.txt" file. If it doesn't exist, create it.
	ifstream file("favs.txt");

	string currentLine;
	int count = 0;


	while (getline(file, currentLine)) {
		
		fileContents[count] = currentLine;
		count++;
	}


	//close the file (saves it to disk)
	file.close();

}


void WriteArrayToFile(string* arr, int size) {
	ofstream file("favs.txt");					// open or create the file "favs.txt""

	if (!file.is_open()) {
		return;									// don't try to write to a file that is not open
	}

	for (int i = 0; i < size; i++) {			// for each line in the array, add line to the file
		file << arr[i] << "\n";
	}

	// close the file (saves it to disk)
	file.close();
}