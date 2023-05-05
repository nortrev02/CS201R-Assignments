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

listItem initListItem() {

}

queueNodeData initQueueNodeData() {

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
	double minutes = 0.0;
	int CartsUsed = 0;
	linkedList InTheStore;

	// All data initialized above. Below is main loop for the program.
	
	//while (running) { // commented out for debugging purposes
	//	if (linkedList.peek().enter
	//	int newCustomers;
	//	if (minutes < 720.0) {
	//		newCustomers = rand() % 3 + 1;
	//	}
	//	for (int i = 0; i < newCustomers; i++) { // The "Constructor" for new customers. Passed to linked list.
	//		CartsUsed++;
	//		listItem Temp;

	//		InTheStore.addElement(Temp);
	//	}
	//}
}