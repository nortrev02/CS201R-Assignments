#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#include "GameFunctions.h"
using namespace std;

void loadTrueDeck(vector<cards>& trueDeck){
    for (int i = 0; i < 52; i++) {
        cards temp;
        trueDeck.push_back(temp);
    }
	trueDeck.at(0).name = "Ace";
	trueDeck.at(0).suit = '?';
	trueDeck.at(0).value = 1;
	trueDeck.at(1).name = "Two";
	trueDeck.at(1).suit = '?';
	trueDeck.at(1).value = 2;
	trueDeck.at(2).name = "Three";
	trueDeck.at(2).suit = '?';
	trueDeck.at(2).value = 3;
	trueDeck.at(3).name = "Four";
	trueDeck.at(3).suit = '?';
	trueDeck.at(3).value = 4;
	trueDeck.at(4).name = "Five";
	trueDeck.at(4).suit = '?';
	trueDeck.at(4).value = 5;
	trueDeck.at(5).name = "Six";
	trueDeck.at(5).suit = '?';
	trueDeck.at(5).value = 6;
	trueDeck.at(6).name = "Seven";
	trueDeck.at(6).suit = '?';
	trueDeck.at(6).value = 7;
	trueDeck.at(7).name = "Eight";
	trueDeck.at(7).suit = '?';
	trueDeck.at(7).value = 8;
	trueDeck.at(8).name = "Nine";
	trueDeck.at(8).suit = '?';
	trueDeck.at(8).value = 9;
	trueDeck.at(9).name = "Ten";
	trueDeck.at(9).suit = '?';
	trueDeck.at(9).value = 10;
	trueDeck.at(10).name = "Jack";
	trueDeck.at(10).suit = '?';
	trueDeck.at(10).value = 11;
	trueDeck.at(11).name = "Queen";
	trueDeck.at(11).suit = '?';
	trueDeck.at(11).value = 12;
	trueDeck.at(12).name = "King";
	trueDeck.at(12).suit = '?';
	trueDeck.at(12).value = 13;
	trueDeck.at(13).name = "Ace";
	trueDeck.at(13).suit = '?';
	trueDeck.at(13).value = 1;
	trueDeck.at(14).name = "Two";
	trueDeck.at(14).suit = '?';
	trueDeck.at(14).value = 2;
	trueDeck.at(15).name = "Three";
	trueDeck.at(15).suit = '?';
	trueDeck.at(15).value = 3;
	trueDeck.at(16).name = "Four";
	trueDeck.at(16).suit = '?';
	trueDeck.at(16).value = 4;
	trueDeck.at(17).name = "Five";
	trueDeck.at(17).suit = '?';
	trueDeck.at(17).value = 5;
	trueDeck.at(18).name = "Six";
	trueDeck.at(18).suit = '?';
	trueDeck.at(18).value = 6;
	trueDeck.at(19).name = "Seven";
	trueDeck.at(19).suit = '?';
	trueDeck.at(19).value = 7;
	trueDeck.at(20).name = "Eight";
	trueDeck.at(20).suit = '?';
	trueDeck.at(20).value = 8;
	trueDeck.at(21).name = "Nine";
	trueDeck.at(21).suit = '?';
	trueDeck.at(21).value = 9;
	trueDeck.at(22).name = "Ten";
	trueDeck.at(22).suit = '?';
	trueDeck.at(22).value = 10;
	trueDeck.at(23).name = "Jack";
	trueDeck.at(23).suit = '?';
	trueDeck.at(23).value = 11;
	trueDeck.at(24).name = "Queen";
	trueDeck.at(24).suit = '?';
	trueDeck.at(24).value = 12;
	trueDeck.at(25).name = "King";
	trueDeck.at(25).suit = '?';
	trueDeck.at(25).value = 13;
	trueDeck.at(26).name = "Ace";
	trueDeck.at(26).suit = '?';
	trueDeck.at(26).value = 1;
	trueDeck.at(27).name = "Two";
	trueDeck.at(27).suit = '?';
	trueDeck.at(27).value = 2;
	trueDeck.at(28).name = "Three";
	trueDeck.at(28).suit = '?';
	trueDeck.at(28).value = 3;
	trueDeck.at(29).name = "Four";
	trueDeck.at(29).suit = '?';
	trueDeck.at(29).value = 4;
	trueDeck.at(30).name = "Five";
	trueDeck.at(30).suit = '?';
	trueDeck.at(30).value = 5;
	trueDeck.at(31).name = "Six";
	trueDeck.at(31).suit = '?';
	trueDeck.at(31).value = 6;
	trueDeck.at(32).name = "Seven";
	trueDeck.at(32).suit = '?';
	trueDeck.at(32).value = 7;
	trueDeck.at(33).name = "Eight";
	trueDeck.at(33).suit = '?';
	trueDeck.at(33).value = 8;
	trueDeck.at(34).name = "Nine";
	trueDeck.at(34).suit = '?';
	trueDeck.at(34).value = 9;
	trueDeck.at(35).name = "Ten";
	trueDeck.at(35).suit = '?';
	trueDeck.at(35).value = 10;
	trueDeck.at(36).name = "Jack";
	trueDeck.at(36).suit = '?';
	trueDeck.at(36).value = 11;
	trueDeck.at(37).name = "Queen";
	trueDeck.at(37).suit = '?';
	trueDeck.at(37).value = 12;
	trueDeck.at(38).name = "King";
	trueDeck.at(38).suit = '?';
	trueDeck.at(38).value = 13;
	trueDeck.at(39).name = "Ace";
	trueDeck.at(39).suit = '?';
	trueDeck.at(39).value = 1;
	trueDeck.at(40).name = "Two";
	trueDeck.at(40).suit = '?';
	trueDeck.at(40).value = 2;
	trueDeck.at(41).name = "Three";
	trueDeck.at(41).suit = '?';
	trueDeck.at(41).value = 3;
	trueDeck.at(42).name = "Four";
	trueDeck.at(42).suit = '?';
	trueDeck.at(42).value = 4;
	trueDeck.at(43).name = "Five";
	trueDeck.at(43).suit = '?';
	trueDeck.at(43).value = 5;
	trueDeck.at(44).name = "Six";
	trueDeck.at(44).suit = '?';
	trueDeck.at(44).value = 6;
	trueDeck.at(45).name = "Seven";
	trueDeck.at(45).suit = '?';
	trueDeck.at(45).value = 7;
	trueDeck.at(46).name = "Eight";
	trueDeck.at(46).suit = '?';
	trueDeck.at(46).value = 8;
	trueDeck.at(47).name = "Nine";
	trueDeck.at(47).suit = '?';
	trueDeck.at(47).value = 9;
	trueDeck.at(48).name = "Ten";
	trueDeck.at(48).suit = '?';
	trueDeck.at(48).value = 10;
	trueDeck.at(49).name = "Jack";
	trueDeck.at(49).suit = '?';
	trueDeck.at(49).value = 11;
	trueDeck.at(50).name = "Queen";
	trueDeck.at(50).suit = '?';
	trueDeck.at(50).value = 12;
	trueDeck.at(51).name = "King";
	trueDeck.at(51).suit = '?';
	trueDeck.at(51).value = 13;


} // makes a master array of all the possible cards in a deck of cards. Dear god, is there an easier way?

void shuffleDeck(vector<cards> tDeck, vector<cards>& newDeck) {
    int cardsLeft = tDeck.size();
    int cardno;
    while (!tDeck.empty()) {
        srand(time(0));
        cardno = rand() % tDeck.size();
        newDeck.push_back(tDeck.at(cardno));
        tDeck.erase(tDeck.begin() + cardno);
    }
}

void printHand(vector<cards> hand) {
	int output = 0;
	cout << endl << "\t";
	for (int i = 0; i < hand.size(); i++) {
		output++;
		if (hand.at(i).suit == '♦' || hand.at(i).suit == '♥') {
			//change text color to red
			cout << hand.at(i).suit << " " << hand.at(i).name << "  ";
            //change text color back to black
		}
		else {
			cout << hand.at(i).suit << " " << hand.at(i).name << "  ";
		}
		if (output % 7 == 0) {
			cout << endl << "\t";
		}
	}
    cout << endl;
}

void loadWords(vector<string>& words) {
	ifstream in("words.txt");
	while (in.good()) {
		string nu;
		getline(in, nu);
		words.push_back(nu);
	}
	words.pop_back();
}// Loads a file of words into a vector of words used in hangman.

void playBlackJack(vector<cards> trueDeck) {
    bool playing = true;
    char gameChoice;
    while (playing) {
        vector<cards> pHand;
        vector<cards> cHand;
        vector<cards> dealerDeck;
        cout << "WELCOME TO BLACKJACK!" << endl << endl;
        char choice = 'L';
        int pTotal;
        int cTotal;
        shuffleDeck(trueDeck, dealerDeck);
        cHand.push_back(dealerDeck.at(0));
        dealerDeck.erase(dealerDeck.begin());
        pHand.push_back(dealerDeck.at(0));
        dealerDeck.erase(dealerDeck.begin());
        cHand.push_back(dealerDeck.at(0));
        dealerDeck.erase(dealerDeck.begin());
        pHand.push_back(dealerDeck.at(0));
        dealerDeck.erase(dealerDeck.begin());
        //now both the player and the computer have 2 cards in their hands
        cout << "Your Hand: " << endl;
        printHand(pHand);
        pTotal = totalHand(pHand);
        cTotal = totalHand(cHand);
        if (pTotal < 21) {
            cout << "Your current total is: " << pTotal << endl << endl;
            cout << "Would you like to hit? Hit 'H' to hit." << endl << endl;
            cin >> choice;
            choice = toupper(choice);
        }
        while(pTotal < 21 && choice == 'H') {
            cout << "You were dealt a(n) " << dealerDeck.at(0).name << endl << endl;
            pHand.push_back(dealerDeck.at(0));
            dealerDeck.erase(dealerDeck.begin());
            pTotal = totalHand(pHand);
            if (pTotal < 21) {
                cout << "Total Now " << pTotal << ". Press 'H' to hit again." << endl << endl;
                cin >> choice;
                choice = toupper(choice);
            }
        }
        while (cTotal <= 17) {
            cHand.push_back(dealerDeck.at(0));
            dealerDeck.erase(dealerDeck.begin());
            cTotal = totalHand(cHand);
        }
		cout << "Player Total: " << pTotal << endl;
		cout << "Computer Total: " << cTotal << endl;
        if (pTotal > 21) {
            cout << "Total Now " << pTotal << endl;
            cout << "Player went over 21. Computer Wins!" << endl;
        }
        else if (cTotal > 21) {
            cout << "Computer went over 21. Player Wins!" << endl;
        }
        else if (cTotal == 21) {
            cout << "Computer reached 21. Computer Wins!" << endl;
        }
        else if (pTotal == 21) {
            cout << "Player reached 21. Player Wins!" << endl;
        }
        else if (cTotal > pTotal) {
            cout << "Computer beats player by " << (cTotal - pTotal) << ". Computer Wins!" << endl;
        }
        else if (pTotal > cTotal) {
            cout << "Player beats computer by " << (pTotal - cTotal) << ". Player Wins!" << endl;
        }
        else if (pTotal == cTotal) {
            cout << "Player and Computer are equal. PUSH!" << endl;
        }
        cout << endl;
        cout << "Would You Like To Play Again? Enter 'Y' to play again." << endl << endl;
        cin >> gameChoice;
        gameChoice = toupper(gameChoice);
        if (gameChoice != 'Y') {
            playing = false;
        }
    }

}

int totalHand(vector<cards> hand) {
    int total = 0, aces = 0;
    for (int i = 0; i < hand.size(); i++) {
        if (hand.at(i).value == 1) {
            aces++;
        }
        else {
            total += hand.at(i).value;
        }
    }
    for (int i = 0; i < aces; i++) {
        if (total + 11 > 21) {
            total += 1;
        }
        else {
            total += 11;
        }
    }
    return total;
}

void playCraps() {
	srand(time(0));
	double nWorth = 50.00;
	char choice = 'Y';
	cout << "WELCOME TO CRAPS!" << endl;
	while (choice == 'Y') {
		cout << endl;
		bool won = false;
		short int dice1;
		short int dice2;
		short int total;
		short int point;
		double bet = 0.0;
		bool valBet = false;
		cout << "Your net worth is $" << nWorth << ". Please enter your bet: ";
		while (!valBet) {
			cin >> bet;
			if (bet > nWorth) {
				cout << endl << endl << "Your net worth is only: $" << nWorth << ". Please adjust your bet: ";
			}
			else {
				valBet = true;
			}
		}
		cout << endl << endl;
		dice1 = rand() % 6 + 1;
		dice2 = rand() % 6 + 1;
		total = dice2 + dice1;
		cout << dice1 << " + " << dice2 << " = " << total << endl;
		if (total == 7 || total == 11) {
			won = true;
		}
		else if (total == 2 || total == 3 || total == 12) {
			won = false;
		}
		else {
			point = total;
			cout << "Point Set: " << point << endl;
			total = 0;
			while (total != point && total != 7) {
				dice1 = rand() % 6 + 1;
				dice2 = rand() % 6 + 1;
				total = dice2 + dice1;
				cout << dice1 << " + " << dice2 << " = " << total << endl;
				if (total == point) {
					won = true;
					break;
				}
				else if (total == 7){
					won = false;
					break;
				}
			}
		}
		if (won) {
			nWorth += bet;
			cout << "Yay!! You Win!! Your total is now: $" << nWorth << ". " << endl << endl << endl;
		}
		else {
			nWorth -= bet;
			cout << "Sorry, you lost." << endl << endl << endl;
		}
		if (nWorth <= 0.0) {
			cout << "Sorry - You are out of money. Don't cause a scene, get out." << endl << endl;
			break;
		}
		else {
			cout << "Would you like to go again? Y or N ";
			cin >> choice;
			choice = toupper(choice);
		}
	}
}

void playHangman(vector<string> words) {
	int guesses = 5;
	bool win = true;
	string word, guessWord;
	srand(time(0));
	word = words.at(rand() % words.size());
	guessWord = word;
	for (int i = 0; i < guessWord.length(); i++) {
		if (guessWord[i] == ' ') {
			guessWord[i] = '_';
		}
		else {
			guessWord[i] = '?';
		}
	} // guess word initialized properly
	cout << "HANGMAN - Your word is: " << guessWord << endl << endl;
	while (guesses > 0) {
		char choice;
		bool good = false;
		win = false;
		cout << "Enter your guess: ";
		cin >> choice;
		cout << endl;
		choice = tolower(choice);
		for (int i = 0; i < word.length(); i++) {
			if (word[i] == choice) {
				guessWord[i] = word[i];
				good = true;
			}
		}
		if (good) {
			cout << "Nice Guess! You have " << guesses << " guesses left. ";
			for (int i = 0; i < word.length(); i++) {
				if (word[i] != guessWord[i]) {
					win = false;
				}
			}
		}
		else {
			guesses--;
			cout << "Sorry! Guess is not valid. You have " << guesses << " guesses left. ";
			win = false;
		}
		if (win) {
			cout << "Nice Guess! You WIN!!!! The word was " << guessWord;
			break;
		}
		else {
			cout << "Your current word: " << guessWord << endl << endl;
		}
	}
	if (!win) {
		cout << "Sorry! You lost! The word was " << word << "." << endl << endl;
	}
}

void playWar(vector<cards> trueDeck) {
	vector<cards> pHand;
	vector<cards> cHand;
	vector<cards> dealerDeck;
	vector<cards> hold;
	string placebo;
	shuffleDeck(trueDeck, dealerDeck);
	bool cWin = true;
	bool pWin = true;
	bool war = false;
	cout << "This is WAR!" << endl << endl;
	for (int i = 0; i < 26; i++) {
		cHand.push_back(dealerDeck.at(0));
		dealerDeck.erase(dealerDeck.begin());
		pHand.push_back(dealerDeck.at(0));
		dealerDeck.erase(dealerDeck.begin());
	}//now both the player and the computer have 26 cards in their hands
	while (cWin && pWin) {
		if (war) {
			cout << "Hold: ";
			printHand(hold);
			cout << endl;
		}
		cout << "Player: " << pHand.size() << " : ";
		printHand(pHand);
		cout << "Computer: " << cHand.size() << " : ";
		printHand(cHand);
		cout << "Player: " << pHand.at(0).suit << " " << pHand.at(0).value << "\t";
		cout << "Computer:" << cHand.at(0).suit << " " << cHand.at(0).value << endl << endl;
		if (pHand.at(0).value > cHand.at(0).value) {
			pHand.push_back(pHand.at(0));
			pHand.erase(pHand.begin());
			pHand.push_back(cHand.at(0));
			cHand.erase(cHand.begin());
			if (war) {
				cout << "You won the war! Cards Get!" << endl;
				for (int i = 0; i < hold.size(); i++) {
					pHand.push_back(hold.at(i));
				}
				hold.clear();
			}
			else {
				cout << "You won this battle! Onto the next one!" << endl;
			}
			war = false;
		}
		else if (cHand.at(0).value > pHand.at(0).value) {
			cHand.push_back(cHand.at(0));
			cHand.erase(cHand.begin());
			cHand.push_back(pHand.at(0));
			pHand.erase(pHand.begin());
			if (war) {
				cout << "Computer won the war!" << endl;
				for (int i = 0; i < hold.size(); i++) {
					cHand.push_back(hold.at(i));
				}
				hold.clear();
			}
			else {
				cout << endl << "Computer Won this battle, but not the war!" << endl;
			}
			war = false;
		}
		else if (cHand.at(0).value == pHand.at(0).value) {
			cout << "Tie! This means WAR!" << endl;
			for (int i = 0; i < 4; i++) {
				hold.push_back(pHand.at(0));
				pHand.erase(pHand.begin());
				hold.push_back(cHand.at(0));
				cHand.erase(cHand.begin());
			}
			war = true;
			continue;
		}
		if (pHand.size() < 10) {
			pWin = false;
			cout << endl << "Computer Won. Try again?" << endl << endl;
		}
		else if (cHand.size() < 10) {
			cWin = false;
			cout << endl << "You Won! Congrats, onto the next game!" << endl << endl;
		}
		else {
			cout << endl << "Enter any key to continue to next battle! " << endl;
			cin >> placebo;
			cout << endl;
		}
	}
}