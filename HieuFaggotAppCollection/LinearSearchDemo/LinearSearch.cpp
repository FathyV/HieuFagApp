#include "LinearSearch.h"



bool LinearSearch::search(int item, int list[], int size)
{
	bool isFound = false;
	for (int i = 0;i < size;i++) {
		if (item == list[i]) {
			isFound = true;
		}
	}
	return isFound;
}

LinearSearch::LinearSearch()
{
}


LinearSearch::~LinearSearch()
{
}
