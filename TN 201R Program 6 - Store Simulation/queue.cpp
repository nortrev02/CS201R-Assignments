#include "queue.h"

queue::queue() {
	front = nullptr;
	rear = nullptr;
	numPpl = 0;
}

void queue::enQueue(queueNodeData newCustomer) {
	if (queueEmpty() == true) {
		front = &newCustomer;
		rear = &newCustomer;
	}
	else {
		rear->next = &newCustomer;
		rear = &newCustomer;
	}
}

void queue::deQueue() {
	queueNodeData* deleting = front;
	front = front->next;
	deleting->next = nullptr;
	delete deleting;
}

queueNodeData queue::peek() {
	return *front;
}

bool queue::queueEmpty() {
	if (front == nullptr) {
		return true;
	}
	else {
		return false;
	}
}

void queue::printQueue() { // unfinished

}