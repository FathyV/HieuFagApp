#include "MyInput.h"
#include "MyOutput.h"
#include <string>
#include <iostream>
#include <fstream>

int main() {
	string data;
	MyInput input;
	MyOutput output;
	/*cout << "Enter file data: ";
	getline(cin, data);
	input.writeFile("example.txt", data);*/

	output.readFile("example.txt");
}