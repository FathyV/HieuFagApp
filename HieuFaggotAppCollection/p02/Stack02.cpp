#include "Stack02.h"

template<typename T, typename P>
T remove_if(T beg, T end, P pred)
{
	T dest = beg;
	for (T itr = beg;itr != end; ++itr)
		if (!pred(*itr))
			*(dest++) = *itr;
	return dest;
}

void Stack02::push(Item * input)
{
	if (start->getNext() == NULL) {
		start = input;
	}
	if (start->getContent() == "") {
		start = input;
	}
	else {
		input->setNext(start);
		start = input;
	}
}

Item * Stack02::pop() const
{	
	return start;
}

void Stack02::forward()
{
	if (start->getNext() == NULL) {
		start = NULL;
		return;
	}
	start = start->getNext();
}

bool Stack02::validate()
{	
	bool isValidated = true;
	int length = size(content) - 1;
	int iCount = 0;
	for (int i = 0;i <= length;i++) {
		if (content[i] == '{' || content[i] == '(' || content[i] == '[') {
			Item * object = new Item();
			stringstream sStream;
			sStream << content[i];
			string temp;
			sStream >> temp;
			object->setContent(temp);
			object->setContent(temp);
			push(object);
		}
		if (content[i] == '}' || content[i] == ']' || content[i] == ')') {
			Item * temp = pop();
			if (content[i] == '}') {
				forward();
				if (temp->getContent() != "{") {
					isValidated= false;
				}
			}
			if (content[i] == ']') {
				forward();
				if (temp->getContent() != "[") {
					isValidated = false;
				}
			}
			if (content[i] == ')') {
				forward();
				if (temp->getContent() != "(") {
					isValidated = false;
				}
			}
		}		
	}
	return true;
}

void Stack02::setContent(string input)
{
	input.erase(remove_if(input.begin(), input.end(), isspace), input.end());
	content = input;	
}

Stack02::Stack02()
{
	start = new Item();
}


Stack02::~Stack02()
{
}
