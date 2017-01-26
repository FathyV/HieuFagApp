#pragma once
#include <iostream>
#include <string>
#include "Item.h"
#include "Stack02.h"
using namespace std;

int main() {
	string input;
	Stack02 * myStack= new Stack02();
	cout << "Please enter the string: ";
	getline(cin, input);
	myStack->setContent(input);
	bool isCorrect = myStack->validate();
	//cout << (isCorrect) ? "This is correct!\n" : "You're faggot\n";;
	if (isCorrect) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}
}