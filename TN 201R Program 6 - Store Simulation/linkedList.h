#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;

struct listType {
	int cartId = 0; //unique id assigned
	int itemCount = 0; //amount of items generated
	int enterQTime = 0; //current ‘time’ + shopping time
	int exitQTime = 0; //enterQTime + checkout time
};

struct Node {
	listType data;
	Node* nextPtr = nullptr;
};

class linkedList {
private:
	listType CustomerData;
	Node LLData;
	static int listCount; //number of carts currently in the list
	
public:
	linkedList();
	void addElement(listType); //add cart information to the list (list should probably be ordered)
	listType peek(); //return the contents of the front of the list (but do not remove)
	void delElement(); //remove a node item from the front of the list
	void printList();
	bool listIsEmpty(); //return true if the list is empty (headPtr = nullptr?), false otherwise
};
