#include "golf.h"
#include <iostream>

int main() {
	std::cout << "non-interactive version: " << std::endl;
	golf ann;
	setGolf(ann, "Ann Birdfree", 24);	
	showGolf(ann);
	std::cout << "reset handicap: " << std::endl;
	handicap(ann, 25);
	showGolf(ann);
	
	std::cout << "\ninteractive version: " << std::endl;
	golf inter;
	int res = setGolf(inter);
	std::cout << "Name is " << (res ? "not empty" : "empty") << std::endl;
	showGolf(inter);
	return 0;
}
