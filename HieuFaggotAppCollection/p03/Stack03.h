#pragma once
#include <iostream>
#include <string>
using namespace std;
struct Node{
public:
	int value;
	Node* next;
};
class Stack03
{
private:
	mutable Node* start;
public:	
	void push(int input);
	Node* pop() const;
	Stack03();
	~Stack03();
};

