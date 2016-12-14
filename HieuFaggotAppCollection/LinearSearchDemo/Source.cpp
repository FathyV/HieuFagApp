#include <iostream>
#include <string>
#include "LinearSearch.h"

using namespace std;
int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
int value=0;
bool isFound = false;
bool isContinue = true;
LinearSearch mySearch;

void findItemInList();
void printResult();
void askToContinue();

int main() {	
	while (isContinue) {
		findItemInList();
		int size = sizeof(arr) / sizeof(arr[0]);
		isFound = mySearch.search(value, arr, size);
		printResult();
		askToContinue();
	}
	return 0;
}

void findItemInList() {
	cout << "Please enter the value you want to find: ";
	cin >> value;
}

void printResult() {
	string message = "";
	message = (isFound) ? "The value " + to_string(value) + " is found!" : "The value " + to_string(value) + " is not existed!";
	cout << message << endl;
}

void askToContinue() {
	string temp;
	cout << "Do you want to continue? ";
	cin >> temp;
	isContinue = (temp == "y" || temp == "Y") ? true : false;
}