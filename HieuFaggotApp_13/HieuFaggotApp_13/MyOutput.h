#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
class MyOutput
{
private:
	ifstream myFile;
public:
	bool readFile(string fileName);
	MyOutput();
	~MyOutput();
};

