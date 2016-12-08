#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
class MyInput
{
private:
	ofstream myFile;
public:
	bool writeFile(string fileName, string inputData);
	MyInput();
	~MyInput();
};

