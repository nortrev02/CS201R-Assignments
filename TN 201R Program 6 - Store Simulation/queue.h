#pragma once
#include <iostream>
using namespace std;

struct queueNodeData {
	int timeAvailable; //clock time when current customer is dequeued
	int itemCount; //the number of items for current customer
	queueNodeData* next;
};

class queue {
private:
	int numPpl;
	queueNodeData* front;
	queueNodeData* rear;
	
public:
	queue();
	void enQueue(queueNodeData); //add the queueNodeData item to the end of the queue
	void deQueue(); //remove a queueNodeData item from the front of the queue
	queueNodeData peek(); //return the contents of the front of the queue (but do not remove)
	bool queueEmpty(); //return true if the queue is empty (front = nullptr?), false otherwise
	void printQueue();
	int howMany() { return numPpl; }
};