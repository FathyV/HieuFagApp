#include "Item.h"

string Item::getContent() const
{
	return content;
}

Item * Item::getNext() const
{
	return next;
}

void Item::setContent(string input)
{
	content = input;
}

void Item::setNext(Item * input)
{
	next = input;
}

Item::Item()
{
	content = "";
	next = NULL;
}

Item::~Item()
{
}
