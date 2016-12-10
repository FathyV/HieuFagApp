#include <iostream>
#include <string>
using namespace std;

bool input();
bool isContinue();

bool isContinue() {
	string choice;
	cout << "Do you want to continue[y/n]: ";
	getline(cin, choice);
	if (choice == "y")
		return true;
	else
		return false;
}

bool input() {
	string name;
	string month[12] = { "january","february","march","april","may","june","july","august","september","october","november","december", };
	try {
		cout << "Please enter the month name: ";
		getline(cin, name);
		if (name == "") {
			throw 1;
		}
		else {
			bool isValid = false;
			int iMonth = 0;

			for (int i = 0;i <= 11;i++) {
				if (name == month[i]) {
					isValid = true;
					iMonth = i;
				}
			}

			if (!isValid) {
				throw 2;
			}
			else {
				cout << "The number of the month is: " << iMonth + 1 << endl;

				return isContinue();
			}
		}
	}
	catch (int e) {
		if (e == 1) {
			cout << "Name can't be empty!" << endl;
		}
		else if (e == 2) {
			cout << "You must enter the valid name!" << endl;
		}
	}

	return isContinue();
}

int main() {
	bool isContinue = true;
	while (isContinue) {
		isContinue = input();
	}
}