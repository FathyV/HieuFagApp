#include "MyInput.h"
bool MyInput::writeFile(string fileName, string inputData)
{
	try {
		myFile.open(fileName, std::ios::app);
		myFile << inputData + "\n";
		myFile.close();
		return true;
	}
	catch (int ex) {
		cout << "An error occurred in writting process!" << endl;
		return false;
	}
}

MyInput::MyInput()
{
}


MyInput::~MyInput()
{
}
