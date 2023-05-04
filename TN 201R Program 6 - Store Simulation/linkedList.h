#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;

struct listItem {
	int cartId; //unique id assigned
	int itemCount; //amount of items generated
	int enterQTime; //current ‘time’ + shopping time
	int exitQTime; //enterQTime + checkout time
	listItem* nextItem = nullptr;
};

class linkedList {
private:
	listItem* headPtr;
	listItem data;
	int listCount = 0;
	
public:
	linkedList();
	void addElement(listItem); //add cart information to the list (list should probably be ordered)
	listItem peek();//return the contents of the front of the list (but do not remove)
	void delElement(); //remove a node item from the front of the list
	void printList();
	bool listIsEmpty(); //return true if the list is empty (headPtr = nullptr?), false otherwise
};
