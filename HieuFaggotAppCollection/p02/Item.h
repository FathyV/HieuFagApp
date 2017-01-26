#pragma once
#include <iostream>
#include <string>
#include "Item.h"
using namespace std;
class Item
{
private:
	string content;
	Item * next;
public:
	string getContent() const;
	Item * getNext() const;
	void setContent(string input);
	void setNext(Item* input);
	Item();
	~Item();
};

