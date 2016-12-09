#include "MyInput.h"
#include "MyOutput.h"
#include <string>
#include <iostream>
#include <fstream>
void readAndAddNumber(string fileName);

template<typename T, typename P>
T remove_if(T beg, T end, P pred)
{
	T dest = beg;
	for (T itr = beg;itr != end; ++itr)
		if (!pred(*itr))
			*(dest++) = *itr;
	return dest;
}

void readAndAddNumber(string fileName) {	
	ifstream readFile;
	int iCount = 0;
	int numberArr[4] = { 2,4,6,8 };
	readFile.open(fileName);
	if (readFile.is_open()) {
		while (!readFile.eof()) {
			string data;
			string name;
			int number;
			getline(readFile, data);
			name = data.substr(0, data.length() - 2);
			number = atoi(data.substr(data.length() - 2, 2).c_str());
			data.erase(remove_if(data.begin(), data.end(), isspace));
			cout << name << " " << number + numberArr[iCount] << endl;
			iCount++;
		}
	}
	readFile.close();
}


int main() {
	readAndAddNumber("example.txt");
	return 0;
}