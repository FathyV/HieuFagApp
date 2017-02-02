#include "Scan03.h"



void Scan03::traverse(string fileName)
{
	ifstream readFile(fileName);
	string line;
	int count = 0;
	ofstream writer;
	writer.open("o03.dat");
	while (getline(readFile, line))
	{
		Stack03* myStack = new Stack03();
		int length = line.size();
		stringstream ss;
		int value = 0;
		for (int i = 0;i <= length - 1;i++) {
			//if operator
			if (line[i] == '+' || line[i] == '-' || line[i] == '*' || line[i] == '/') {
				int result = 0;
				int firstValue = myStack->pop()->value;
				int secondValue = myStack->pop()->value;
				if (line[i] == '+')
					result = (secondValue + firstValue);
				else if (line[i] == '-')
					result = (secondValue - firstValue);
				else if (line[i] == '*')
					result = (secondValue* firstValue);
				else if (line[i] == '/')
					result = (secondValue / firstValue);
				myStack->push(result);
			}
			//operand
			else if (line[i] == ' ') {
				if (line[i - 1] == '+' || line[i - 1] == '-' || line[i - 1] == '*' || line[i - 1] == '/') {
				}
				else {
					ss >> value;
					myStack->push(value);
					ss.clear();
					value = 0;
				}
			}
			else {
				ss << line[i];
			}
		}
		int result = myStack->pop()->value;
		/*if (count == 1)
			ssContent << "Stack[tos] =" << result << endl;
		else
			ssContent << "Stack[" << count << "] =" << result << endl;*/
		std::cout << "Stack[" << count << "] =" << result << endl;
		if (count == 0)
			writer << "Stack[tos] =" << result << endl;
		else
			writer << "Stack[tos-" << count << "] =" << result << endl;
		count++;
	}
	readFile.close();
	writer.close();
}

Scan03::Scan03()
{
	ofstream myfile;
	myfile.open("i03.dat");
	myfile << "88 7 1 + /" << endl;
	myfile << "7 6 * 3 +" << endl;
	myfile.close();
}


Scan03::~Scan03()
{
}
