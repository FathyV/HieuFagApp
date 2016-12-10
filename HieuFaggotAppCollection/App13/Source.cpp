#include <string>
#include <iostream>
#include <fstream>
using namespace std;
string readAndAddNumber(string fileName);
void writeNewFileOput(string fileName);
int inputAdditionAmount();

template<typename T, typename P>
T remove_if(T beg, T end, P pred)
{
	T dest = beg;
	for (T itr = beg;itr != end; ++itr)
		if (!pred(*itr))
			*(dest++) = *itr;
	return dest;
}

int inputAdditionAmount() {
	try {
		int addAmount;
		cout << "Enter amount to add: " << endl;
		cin >> addAmount;

		if (addAmount >= 82) {
			throw 100;
		}
		else if (addAmount < 0) {
			throw 101;
		}
		else {
			return addAmount;
		}
	}
	catch (int ex) {
		switch (ex) {
		case 100:
			cout << "Please enter the number that is smaller than 82!" << endl;
			break;
		case 101:
			cout << "The number must be larger than 0!";
		}
		return inputAdditionAmount();
	}
}

void writeNewFileOput(string fileName, string data) {
	ofstream writeFile;
	writeFile.open(fileName);
	writeFile << data + "\n";
	writeFile.close();
}

string readAndAddNumber(string fileName) {
	ifstream readFile;
	string temp = "";
	readFile.open(fileName);
	if (readFile.is_open()) {
		while (!readFile.eof()) {
			string data;
			string name;
			int number;
			int addAmount;
			getline(readFile, data);
			cout << data << endl;
			addAmount = inputAdditionAmount();
			name = data.substr(0, data.length() - 2);
			number = atoi(data.substr(data.length() - 2, 2).c_str());
			data.erase(remove_if(data.begin(), data.end(), isspace));
			temp += name + " " + to_string(number + addAmount) + "\n";
		}
		cout << temp << endl;
	}
	readFile.close();
	return temp;
}


int main() {
	string fileName;
	cout << "Enter new file name: " << endl;
	getline(cin, fileName);
	string result = readAndAddNumber("example.txt");
	fileName.erase(remove_if(fileName.begin(), fileName.end(), isspace));
	writeNewFileOput(fileName + ".txt", result);
	return 0;
}