#pragma once
using namespace std;

class queue {
private:
	struct queueNodeData {
		int timeAvailable; //clock time when current customer is dequeued
		int itemCount; //the number of items for current customer
	};
	struct queueNode {
		queueNodeData data;
		queueNode* nextPtr;
	};
public:
};