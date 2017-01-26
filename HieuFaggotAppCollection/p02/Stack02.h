#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "Item.h"
using namespace std;
class Stack02
{
private:
	Item * start;
	string content;
public:
	void push(Item * input);
	Item * pop() const;
	void forward();
	bool validate();
	void setContent(string input);
	Stack02();
	~Stack02();
};

