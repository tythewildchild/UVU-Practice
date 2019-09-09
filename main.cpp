#include "linkedList.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	linkedList list;
	int age = 15;
	int weight = 150;
	string name = "johnny";
	cout << "This is Ty's number list using Linked Lists" << endl;
	cout << "Enter your weight and your height. When you are done, push enter when it asks for name: " << endl;

	while (name != "") {
		cout << "name: " << endl;
		cin >> name;
		if (name == "") {
			break;
		}
		cout << "age: " << endl;
		cin >> age;

		cout << "weight: " << endl;
		cin >> weight;
		list.appendNode(name, age, weight);
	}
	
	list.printList();

}