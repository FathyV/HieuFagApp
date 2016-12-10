#include "Stack.h"



void Stack::push(Course * item)
{
	if (start->getId() == "empty") {
		start = item;
	}
	else {
		item->setNext(start);
		start = item;
	}
}

void Stack::forward()
{
	start = start->getNext();
}

Course* Stack::pop() const
{
	return start;
}

Stack::Stack()
{
	start = new Course();
}


Stack::~Stack()
{
}
