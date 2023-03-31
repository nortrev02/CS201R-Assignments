#pragma once
#include <vector>
#include <string>
using namespace std;

struct cards {
	string name;
	int value;
};

void loadTrueDeck(cards arr[]);

void loadRandDeck(cards arr[], vector<cards> newDeck);

void printHand(vector<cards> hand);

void loadWords(vector<string>&);

void playBlackJack();

void playCraps();

void playHangman(vector<string>);

void playTicTacToe();

void playWar();