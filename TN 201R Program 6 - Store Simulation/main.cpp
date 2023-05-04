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
	double minutes = 0.0;
	int CartsUsed = 0;
	linkedList InTheStore;

	// All data initialized above. Below is main loop for the program.
	
	while (running) {
		int newCustomers;
		if (minutes < 720.0s) {
			newCustomers = rand() % 3 + 1;
		}
		for (int i = 0; i < newCustomers; i++) { // The "Constructor" for new customers. Passed to linked list.
			CartsUsed++;
			listItem Temp;

			InTheStore.addElement(Temp);
		}
	}
}