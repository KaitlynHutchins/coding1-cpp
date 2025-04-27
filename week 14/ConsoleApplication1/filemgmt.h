#pragma once			// please only compile the stuff in here onece.
#include <string>
#include <iostream>
#include<fstream>					// For File Stream	// alternative, use ifstream for reading
// use ofstream for writing


using namespace std;

void ReadFromFile();

void WriteToFile();

void ReadArrayFromFile(string fileContents[100]);

void WriteArrayToFile(string* arr, int size);
