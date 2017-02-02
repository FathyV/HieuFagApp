#include <iostream>
#include <string>
#include "Scan03.h"
#include <fstream>
using namespace std;

int main() {
	Scan03* scan = new Scan03();
	scan->traverse("i03.dat");
	return 0;
}