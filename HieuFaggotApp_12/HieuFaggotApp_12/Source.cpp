#include <iostream>
#include <string>
using namespace std;

bool input();

bool input() {
	string name;
	string month[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
	try {
		cout << "Please enter your name: ";
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
				cout << "The number of the month is: " << iMonth + 1<<endl;
				return true;
			}
		}
	}
	catch (int e) {
		if (e == 1) {
			cout << "Name can't be empty!" << endl;
		}
		else if(e==2){
			cout << "You must enter the valid name!" << endl;
		}

		return true;
	}
}

int main() {
	bool isContinue = true;
	while (isContinue) {
		isContinue= input();
		cout << "Result is " << isContinue << endl;
	}
}