#pragma once
#include <vector>
#include <string>
using namespace std;

struct cards {
	string name;
	char suit;
	int value;
};

void loadTrueDeck(vector<cards>& );

void shuffleDeck(vector<cards> tDeck, vector<cards>& newDeck);

void printHand(vector<cards> hand);

void loadWords(vector<string>&);

void playBlackJack(vector<cards>);

int totalHand(vector<cards>);

void playCraps();

void playHangman(vector<string>);

void playWar(vector<cards>);