#include "Course.h"

void Course::setName(string inName)
{
	name = inName;
}

void Course::setId(string inId)
{
	id = inId;
}

void Course::setNext(Course * inNext)
{
	next = inNext;
}

string Course::getName() const
{
	return name;
}

string Course::getId() const
{
	return id;
}

Course * Course::getNext() const
{
	return next;
}

Course::Course()
{
	name = "empty";
	id = "empty";
	next = NULL;
}


Course::~Course()
{
}
