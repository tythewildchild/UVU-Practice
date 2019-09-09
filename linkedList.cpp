#include "linkedList.h"
#include <iostream>
#include <string>
using namespace std;

linkedList::linkedList() {
	head = nullptr;
	tail = nullptr;
}

void linkedList::appendNode(string name, int age, int weight) {
	Node* newNode = new Node;
	newNode->name = name;
	newNode->age = age;
	newNode->weight = weight;
	newNode->next = nullptr;

	if (head == nullptr) {
		head = newNode;
		tail = newNode;
		newNode = nullptr;
	}
	else {
		tail->next = newNode;
		tail = newNode;
	}
}

void linkedList::printList() {
	Node* cursor = new Node;
	cursor = head;
	cout << "Here is your information: ";
	while (cursor != nullptr) {
			cout << "You are " << cursor->age << " years old and weigh " << cursor->weight << " pounds." << endl;
			cursor = cursor->next;
	}
	cout << endl;
}