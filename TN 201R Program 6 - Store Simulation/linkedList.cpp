#include "linkedList.h"

linkedList::linkedList() { // UNFINISHED
	
}

void linkedList::addElement(listItem adding) { // UNFINISHED
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

void linkedList::delElement() { // UNFINISHED
	listCount--;
}

void linkedList::printList() { // UNFINISHED
	listItem* traversing = headPtr;
	while (traversing != nullptr) {
		cout << "Printing unfinished" << endl;
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