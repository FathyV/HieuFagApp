#include "Stack03.h"



void Stack03::push(int input)
{
	if (start == nullptr) {
		start = new Node();
		start->value = input;
		start->next = nullptr;
	}
	else {
		Node* newNode = new Node();//set new node
		newNode->value = input;
		newNode->next = start;//set new node next = start
		start = newNode;//move start to new node
	}
}

Node* Stack03::pop() const
{
	Node* result = new Node();
	result->value = start->value;
	start = start->next;
	return result;
}

Stack03::Stack03()
{
}


Stack03::~Stack03()
{
}
