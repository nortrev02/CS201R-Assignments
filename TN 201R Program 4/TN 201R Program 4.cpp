#include <iostream>
#include <vector>
#include <string>
#include "GameFunctions.h"
using namespace std;

//Struct "cards" defined in header file. Has variables string word, 

int main()
{
	bool running = true;
	vector<string> wordList;
	cards trueDeck[52];
	loadTrueDeck(trueDeck);
	loadWords(wordList);
	while (running) {
		char choice;
		cout << "Games List" << endl;
		cout << "B - Blackjack" << endl;
		cout << "C - Craps" << endl;
		cout << "H - Hangman" << endl;
		cout << "T - TicTacToe" << endl;
		cout << "W - War" << endl;
		cout << "Q - Quit" << endl;
		cout << "What game would you like to play?" << endl << endl;
		cin >> choice;
		choice = toupper(choice);
		switch (choice) {
		case 'B':
			playBlackJack();
			break;
		case 'C':
			playCraps();
			break;
		case 'H':
			playHangman(wordList);
			break;
		case 'T':
			playTicTacToe();
			break;
		case 'W':
			playWar();
			break;
		case 'Q':
			running = false;
			break;
		default:
			cout << "Invalid Input. Make sure to choose a selection from the list." << endl << endl;

		}
	}
} 