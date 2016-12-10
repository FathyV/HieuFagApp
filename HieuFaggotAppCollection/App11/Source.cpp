#pragma once
#include <iostream>
#include <string>
#include "Course.h"
#include "Stack.h"
using namespace std;

int main() {
	Stack *myStack = new Stack();

	string isContinue = "y";
	string name, id;
	int iCount = 0;

	while (isContinue == "y") {
		Course *input = new Course();
		//input the course name and id
		cout << "Please enter your id: ";
		getline(cin, id);
		cout << "Please enter your name: ";
		getline(cin, name);

		//set the course fields
		input->setId(id);
		input->setName(name);
		//push to the list
		myStack->push(input);
		//ask to continue
		iCount++;
		cout << "Do you want to continue? [y/n]: ";
		getline(cin, isContinue);
	}

	//print the list
	while (iCount > 0) {
		Course *current = new Course();
		current = myStack->pop();
		myStack->forward();
		cout << "Id: " << current->getId() << "Name: " << current->getName() << endl;

		iCount--;
	}


	/*Course *c, *c1, *c2, *c3;
	c = new Course();
	c1 = new Course();
	c2 = new Course();
	c3 = new Course();

	c1->setId("1");
	c1->setName("Hung");

	c2->setId("2");
	c2->setName("Hieu");

	c3->setId("3");
	c3->setName("Thong");

	myStack->push(c1);
	myStack->push(c2);
	myStack->push(c3);

	cout << myStack->pop()->getName() << endl;
	myStack->forward();
	cout << myStack->pop()->getName() << endl;
	myStack->forward();
	cout << myStack->pop()->getName() << endl;
	myStack->forward();*/


	return 0;
}