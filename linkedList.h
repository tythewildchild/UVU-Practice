#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class Node {
public:
	int age, weight, heightFeet, heightInches;
	string name;
	Node* next;
};

class linkedList
{
public:
	linkedList();
	void appendNode(string name, int age, int weight);
	void printList();

private:
	Node* head;
	Node* tail;
};

#endif