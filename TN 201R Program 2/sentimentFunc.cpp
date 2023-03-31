#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <stdexcept>
#include <iomanip>
#include <cstdlib>
#include <time.h>
#include "sentimentFunc.h"
using namespace std;

void loadFile(vector<vals>& vect) {
	vals temp;
	ifstream fin("sentiment.txt");
	vector<string> store;
	string tempo, line, word;
	while (fin.good()) {
		vals temp;
		store.clear();
		getline(fin, line);
		stringstream s(line);
		while (getline(s, word, ',')) {
			store.push_back(word);
		}
		temp.word = store.at(0);
		temp.val = stod(store.at(1));
		vect.push_back(temp);
	}
} // This function loads a csv file into a vector of structs. Used only for initializing the vector of all words.


void initValues(vector<vals>& values, vector<vals>& positive, vector<vals>& negative) {
	for (int i = 0; i < values.size(); i++) {
		if (values.at(i).val < -1.5) {
			negative.push_back(values.at(i));
		}
		else if (values.at(i).val > 1.5) {
			positive.push_back(values.at(i));
		}
	}
} // This function "sorts" the words in the vector of all words into negative and positive vectors of words. This does not delete the words from the original vectors.


string getFile(bool& working) {
	string filename;
	cout << "Enter the name of the text file you would like to check:" << endl << "!* Make sure to include \".txt\" in the file name *!" << endl;
	cin >> filename;
	ifstream cfin(filename);
	try {
		if (cfin.good()) {
			cout << "Thank You. File Accepted." << endl;
			return filename;
		}
		else {
			throw runtime_error("Error: File Not Found. Please Try again.");
		}
	}
	catch (runtime_error& excpt) {
		working = false;
		cout << excpt.what() << endl;
	}
} //This function gets the file name from the user and checks if its valid. if it is, it returns the file name. If not, it throws an error.


double printSentimentVal(string filename, vector<vals> vect) {
	string word;
	double tally = 0.0;
	ifstream read(filename);
	while (read >> word) {
		word[0] = tolower(word[0]);
		if (int(word.back()) > 122 || int(word.back()) < 97) {
			word.pop_back();
		}
		for (int i = 0; i < vect.size(); i++) {
			if (word == vect.at(i).word ) {
				tally += vect.at(i).val;
			}
		}
	}
	read.close();
	return tally;
} // This function returns the total sentiment value for a given file. Assumes filename is a valid file.


void printFile(string filename) {
	ifstream file(filename);
	string word, line = "";
	while (file >> word) {
		if ((line.length() + word.length()) < 78) {
			line = (line + word + " ");
		}
		else {
			line = (line + "\n");
			cout << line;
			line = (word + " ");
		}
	}
	cout << line;
	file.close();
	cout << endl << endl;
}// This function prints the file, formatted to 80 characters per line.

char getChoice() {
	char choice;
	cout << "Enter 'N' to change file to negative" << endl;
	cout << "Enter 'P' to change file to positive" << endl;
	cout << "Enter 'Q' to quit" << endl;
	cin >> choice;
	choice = toupper(choice);
	return choice;
} // This function gets the choice from the user for use in the main file.

void inverseIt(string filename, vector<vals> to, vector<vals> from, vector<vals>& old, vector<vals>& nu) {
	srand(time(0));
	string word, line = "";
	ifstream read(filename);
	filename.pop_back();
	filename.pop_back();
	filename.pop_back();
	filename.pop_back();
	ofstream write(filename + "Output.txt");
	while (read >> word) {
		char punc = ' ';
		char cap = word[0];
		if (isupper(cap)) {
			word[0] = tolower(word[0]);
		}
		if (int(word.back()) > 122 || int(word.back()) < 97) {
			if (word != "-") {
				punc = (word.back());
				word.pop_back();
			}
		}
		//Above is stripping the word of punctuation and making it all lowercase
		//Below is the changing of words from positive to negative or vice versa, and saving the changed and old words in a vector.
		for (int i = 0; i < from.size(); i++) {
			if (word == from.at(i).word) {
				int rando = (rand() % to.size());
				old.push_back(from.at(i));
				word = to.at(rando).word;
				nu.push_back(to.at(rando));
			}
		}
		// Below adds all the capital letters and punctuation back to the word if applicable
		if (isupper(cap)) {
			word[0] = toupper(word[0]);
		}
		word.push_back(punc);
		if (punc != ' ') {
			word.push_back(' ');
		}
		//This writes the word to the file.
		if ((line.length() + word.length()) < 78) {
			line = (line + word);
		}
		else {
			line = (line + "\n");
			write << line;
			line = word;
		}
	}
	write << line;
	read.close();
	write.close();
	printChanged(nu, old);
	cout << "After this change, the new file is:" << endl << endl;
	printFile(filename + "Output.txt");
}//changes the file from positive or negative, or vice versa

void printChanged(vector<vals> nu, vector<vals> old) {
	for (int i = 0; i < nu.size(); i++) {
		cout << setw(20) << old.at(i).word << setw(7) << old.at(i).val << setw(20) << nu.at(i).word << setw(7) << nu.at(i).val << endl;
	}
	cout << endl << endl;
}// writes the values of 2 vectors in 4 columns