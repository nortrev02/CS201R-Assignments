#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#include "GameFunctions.h"
using namespace std;

void loadTrueDeck(cards arr[]) {
	arr[0].name = "♣ Ace";
	arr[1].name = "♣ Two";
	arr[2].name = "♣ Three";
	arr[3].name = "♣ Four";
	arr[4].name = "♣ Five";
	arr[5].name = "♣ Six";
	arr[6].name = "♣ Seven";
	arr[7].name = "♣ Eight";
	arr[8].name = "♣ Nine";
	arr[9].name = "♣ Ten";
	arr[10].name = "♣ Jack";
	arr[11].name = "♣ Queen";
	arr[12].name = "♣ King";
	arr[13].name = "♦ Ace";
	arr[14].name = "♦ Two";
	arr[15].name = "♦ Three";
	arr[16].name = "♦ Four";
	arr[17].name = "♦ Five";
	arr[18].name = "♦ Six";
	arr[19].name = "♦ Seven";
	arr[20].name = "♦ Eight";
	arr[21].name = "♦ Nine";
	arr[22].name = "♦ Ten";
	arr[23].name = "♦ Jack";
	arr[24].name = "♦ Queen";
	arr[25].name = "♦ King";
	arr[26].name = "♥ Ace";
	arr[27].name = "♥ Two";
	arr[28].name = "♥ Three";
	arr[29].name = "♥ Four";
	arr[30].name = "♥ Five";
	arr[31].name = "♥ Six";
	arr[32].name = "♥ Seven";
	arr[33].name = "♥ Eight";
	arr[34].name = "♥ Nine";
	arr[35].name = "♥ Ten";
	arr[36].name = "♥ Jack";
	arr[37].name = "♥ Queen";
	arr[38].name = "♥ King";
	arr[39].name = "♠ Ace";
	arr[40].name = "♠ Two";
	arr[41].name = "♠ Three";
	arr[42].name = "♠ Four";
	arr[43].name = "♠ Five";
	arr[44].name = "♠ Six";
	arr[45].name = "♠ Seven";
	arr[46].name = "♠ Eight";
	arr[47].name = "♠ Nine";
	arr[48].name = "♠ Ten";
	arr[49].name = "♠ Jack";
	arr[50].name = "♠ Queen";
	arr[51].name = "♠ King";
	arr[0].value = 1;
	arr[1].value = 2;
	arr[2].value = 3;
	arr[3].value = 4;
	arr[4].value = 5;
	arr[5].value = 6;
	arr[6].value = 7;
	arr[7].value = 8;
	arr[8].value = 9;
	arr[9].value = 10;
	arr[10].value = 11;
	arr[11].value = 12;
	arr[12].value = 13;
	arr[13].value = 1;
	arr[14].value = 2;
	arr[15].value = 3;
	arr[16].value = 4;
	arr[17].value = 5;
	arr[18].value = 6;
	arr[19].value = 7;
	arr[20].value = 8;
	arr[21].value = 9;
	arr[22].value = 10;
	arr[23].value = 11;
	arr[24].value = 12;
	arr[25].value = 13;
	arr[26].value = 1;
	arr[27].value = 2;
	arr[28].value = 3;
	arr[29].value = 4;
	arr[30].value = 5;
	arr[31].value = 6;
	arr[32].value = 7;
	arr[33].value = 8;
	arr[34].value = 9;
	arr[35].value = 10;
	arr[36].value = 11;
	arr[37].value = 12;
	arr[38].value = 13;
	arr[39].value = 1;
	arr[40].value = 2;
	arr[41].value = 3;
	arr[42].value = 4;
	arr[43].value = 5;
	arr[44].value = 6;
	arr[45].value = 7;
	arr[46].value = 8;
	arr[47].value = 9;
	arr[48].value = 10;
	arr[49].value = 11;
	arr[50].value = 12;
	arr[51].value = 13;

} // makes a master array of all the possible cards in a deck of cards. Dear god, is there an easier way?

void loadRandDeck(cards arr[], vector<cards> newDeck) {
	int cardsLeft = 52;
	srand(time(0));

}

void printHand(vector<cards> hand) {
	for (int i = 0; i < hand.size(); i++) {
		if (hand.at(i).name[0] == '♦' || hand.at(i).name[0] == '♥') {
			system("Color 04");
			cout << hand.at(i).name << " ";
			system("Color 07");
		}
		else {
			cout << hand.at(i).name << " ";
		}
	}
}

void loadWords(vector<string>& words) {
	ifstream in("words.txt");
	while (in.good()) {
		string nu;
		in >> nu;
		words.push_back(nu);
	}
	words.pop_back();
}// Loads a file of words into a vector of words used in hangman.

void playBlackJack() {

}

void playCraps() {

}

void playHangman(vector<string> words) {

}

void playTicTacToe() {

}

void playWar() {

}