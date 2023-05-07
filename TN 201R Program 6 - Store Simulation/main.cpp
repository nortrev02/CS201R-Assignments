#include <iostream>
#include "linkedList.h"
#include "queue.h"
#include "queueData.h"
using namespace std;

int verifyNum(int min, int max) {
	int final;
	cin >> final;
	while (final < min || final > max) {
		cout << "Input Invalid. Please Try Again." << endl << endl;
		cin >> final;
	}
	return final;
}

void initListItem(listItem& newItem, int cartNum, const int CurrTime) {
	newItem.cartId = cartNum;
	int random1 = rand() % 10;
	if (random1 == 0) {
		newItem.itemCount = rand() % 30 + 31;
	}
	else if (random1 <= 2) {
		newItem.itemCount = rand() % 10 + 21;
	}
	else if (random1 <= 5) {
		newItem.itemCount = rand() % 10 + 11;
	}
	else {
		newItem.itemCount = rand() % 10 + 1;
	}
	newItem.enterQTime = CurrTime;
	for (int i = 0; i < newItem.itemCount; i++) {
		newItem.enterQTime += rand() % 31 + 30;
	}
}

void initQueueNodeData(queueNodeData& newItem, listItem oldItem, const int CurrTime) {

}

int main() {
	srand(time(0));
	bool running = true;
	short unsigned int cashiersNum;
	vector<queue> cashiers;
	vector<queueData> cashierData;
	vector<int> cartsHelped;
	cout << "Welcome to the Store Simulation!" << endl;
	cout << "DISCLAIMER: Still Under Construction!" << endl << endl;
	cout << "How many Cashiers would you like to use in this simulation? (1-10) " << endl;
	cashiersNum = verifyNum(1, 10);
	cashiers.resize(cashiersNum);
	cashierData.resize(cashiersNum);
	cartsHelped.resize(cashiersNum);
	int seconds = 0; // seconds used instead of minutes for more accurate simulation
	int CartsUsed = 0;
	linkedList InTheStore;

	// All data initialized above. Below is main loop for the program.
	
	while (running) { // commented out for debugging purposes
		if (seconds < 43200 && seconds % 60 == 0) { // adds new customers to the store.
			 int newCustomers = rand() % 3 + 1;
			for (int i = 0; i < newCustomers; i++) { // The "Constructor" for new customers. Passed to linked list.
				CartsUsed++;
				listItem Temp;
				initListItem(Temp, CartsUsed, seconds);
				InTheStore.addElement(Temp);
			}
		}
		if (InTheStore.peek().enterQTime == seconds){ // remove customer from list, add to a queue
			queueNodeData temp;
			initQueueNodeData(temp, InTheStore.peek(), seconds);
			InTheStore.delElement();
			
		}
		seconds++;
	}
}