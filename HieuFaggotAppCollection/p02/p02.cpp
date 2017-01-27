#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "Item.h"
#include "Stack02.h"
using namespace std;

int main() {
	ofstream myfile;
	myfile.open("i02.dat");
	myfile << "(({}[{(){}}]})\n";
	myfile << "(({}[{(){}}]})\n";
	myfile << "(o(t{b}m[s{t(f)s{t}d}f]s)p)us\n";
	myfile << "(I(l{e}e[a{m(a)h{t}f}j]k}s)x\n";
	myfile.close();

	string line;
	ifstream readFile("i02.dat");
	while (getline(readFile, line))
	{
		Stack02 * myStack = new Stack02();
		myStack->setContent(line);
		bool isCorrect = myStack->validate();
		if (isCorrect) {
			cout << line << " is balanced" << endl;
		}
		else {
			cout << line << " is not balanced" << endl;
		}
	}
	readFile.close();
}