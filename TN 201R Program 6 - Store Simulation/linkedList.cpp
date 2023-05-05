#include "linkedList.h"

linkedList::linkedList() {
	headPtr = nullptr;
	listCount = 0;
}

void linkedList::addElement(listItem adding) {  // Sorts the list by enterQTime // UNFINISHED
	listCount++;
	if (headPtr == nullptr) {
		headPtr = &adding;
	}
	else {
		listItem* traversing = headPtr;
		while (traversing != nullptr) {

		}
	}
}

listItem linkedList::peek() { // peek to get info on the next customer to finish shopping, determined by enterQTime (cont on delElement)
	return *headPtr;
}

void linkedList::delElement() { // if the customer finished shopping, execute this function. (this check performed in main function)
	listCount--;
	listItem* deleting = headPtr;
	headPtr = headPtr->nextItem;
	deleting->nextItem = nullptr;
	delete deleting;
}

void linkedList::printList() {
	listItem* traversing = headPtr;
	while (traversing != nullptr) {
		cout << "Cart " << traversing->cartId << " has " << traversing->itemCount << " items." << endl;
		traversing = traversing->nextItem;
	}
}

bool linkedList::listIsEmpty() {
	if (headPtr == nullptr) {
		return true;
	}
	else {
		return false;
	}
}