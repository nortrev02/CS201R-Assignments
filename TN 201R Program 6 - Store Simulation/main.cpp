#include <iostream>
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

	double minutes = 0.0;
	while (running) {
		if (minutes < 720.0) {
			int newCustomers = rand() % 3 + 1;
		}
	}
}