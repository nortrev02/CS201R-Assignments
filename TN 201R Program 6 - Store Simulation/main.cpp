#include <iostream>
#include <cstdlib>
#include "linkedList.h"
#include "queue.h"
#include "queueData.h"
using namespace std;

int main() {
	srand(time(0));
	bool running = true;
	short unsigned int cashiersNum;
	vector<queue> cashiers;
	vector<queueData> cashierData;
	cout << "Welcome to the Store Simulation!" << endl;
	cout << "DISCLAIMER: Still Under Construction!" << endl << endl;
	cout << "How many Cashiers would you like to use in this simulation? (1-10) " << endl;
	cin >> cashiersNum; // validate input later. im tired
	cashiers.resize(cashiersNum);
	cashierData.resize(cashiersNum);

	// All data initialized above. Below is main loop for the program.

	while (running) {
		for (int minutes = 0; minutes < 720; minutes++) {
			int newCustomers = rand() % 3 + 1;
		}
	}
}