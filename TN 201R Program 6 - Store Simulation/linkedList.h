#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;

struct listItem {
	int cartId = 0; //unique id assigned
	int itemCount = 0; //amount of items generated
	int enterQTime = 0; //current ‘time’ + shopping time
	listItem* nextItem = nullptr;
};

class linkedList {
private:
	int listCount;
	listItem* headPtr;
public:
	linkedList();
	void addElement(listItem); //add cart information to the list (list should probably be ordered)
	listItem peek(); //return the contents of the front of the list (but do not remove)
	void delElement(); //remove a node item from the front of the list
	void printList();
	bool listIsEmpty(); //return true if the list is empty (headPtr = nullptr?), false otherwise
};
