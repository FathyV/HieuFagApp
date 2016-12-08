#include "MyOutput.h"


bool MyOutput::readFile(string fileName)
{
	try {
		myFile.open(fileName);
		if (myFile.is_open()) {
			string data;
			while (getline(myFile, data)) {
				cout << data << endl;
			}
		}
		myFile.close();
		return true;
	}
	catch (int ex) {
		cout << "Error in reading process" << endl;
	}
}

MyOutput::MyOutput()
{
}


MyOutput::~MyOutput()
{
}
