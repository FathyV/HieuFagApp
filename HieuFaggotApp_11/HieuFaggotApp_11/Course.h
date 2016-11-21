#pragma once
#include <iostream>
#include <string>
using namespace std;

class Course
{
private:
	string id;
	string name;
	Course* next;
public:
	void setName(string inName);
	void setId(string inId);
	void setNext(Course* inNext);
	string getName() const;
	string getId() const;
	Course* getNext() const;

	Course();
	~Course();
};

