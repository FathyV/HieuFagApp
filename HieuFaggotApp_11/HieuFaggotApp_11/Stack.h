#pragma once
#include "Course.h"
class Stack
{
private:
	Course* start;
public:
	void push(Course *item);
	void forward();
	Course* pop() const;
	
	Stack();
	~Stack();
};

