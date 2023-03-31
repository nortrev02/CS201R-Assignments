#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <stdexcept>
#include <iomanip>
#include "sentimentFunc.h"
using namespace std;

// struct vals initialized in header file. contains 2 attributes, string word and double value.

int main()
{
	vector<vals> allWords;
	vector<vals> positive;
	vector<vals> negative;
	vector<vals> changed;
	vector<vals> nu;
	
	// Initializes the vectors that will be used to store the sentimentality data.
	char choice = ' ';
	loadFile(allWords);
	initValues(allWords, positive, negative);
	while (choice != 'Q') {
		bool working = true;
		string filename = getFile(working);
		if (working == false) {
			break;
		}
		printFile(filename);
		cout << "The original sentiment of this file is: " << printSentimentVal(filename, allWords) << endl << endl;
		while (choice != 'N' && choice != 'Q' && choice != 'P') {
			choice = getChoice();
			if (choice == 'P') {
				cout << "Okay! I will edit file: " << filename << " to be more positive!" << endl << endl;
				inverseIt(filename, positive, negative, changed, nu);
			}
			else if (choice == 'N') {
				cout << "Okay! I will edit file: " << filename << " to be more negative!" << endl << endl;
				inverseIt(filename, negative, positive, changed, nu);
			}
			else if (choice == 'Q') {
				break;
			}
			else {
				cout << "Invalid input, please try again." << endl;
				break;
			}
			filename.pop_back();
			filename.pop_back();
			filename.pop_back();
			filename.pop_back();
			cout << "New Sentiment Value = " << printSentimentVal((filename + "Output.txt"), allWords) << endl << endl;
			cout << "The new output file will be stored in: " << (filename + "Output.txt") << endl;
		}
		if (choice == 'Q') {
			break;
		}
		cout << "Enter any key other than Q to check another file: " << endl;
		cin >> choice;
		choice = toupper(choice);
	}
}