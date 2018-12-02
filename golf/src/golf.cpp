#include "golf.h"
#include <iostream>
#include <limits>

// non-interactive version:
//  function sets golf structure to provided name, handicap
//  using values passed as arguments to the function
void setGolf(golf& g, const char* name, int hc) {
	int i = 0;
	for (; i < Len - 1 && name[i] != '\0'; ++i) {
		g.fullname[i] = name[i];
	}
	g.fullname[i] = '\0';
	handicap(g, hc);
}

// interactive version:
//  function solicits name and handicap from user
//  and sets the members of g to the values entered
//  returns 1 if name is entered, 0 if name is empty string
int setGolf(golf& g) {
	char fullname[Len];
	int handicap;
	std::cout << "Enter fullname: ";
	std::cin.getline(fullname, Len);
	// restore cin in case entered fullname exceeded the limit
	if (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	std::cout << "Enter handicap: ";
	std::cin >> handicap;
	setGolf(g, fullname, handicap);
	return fullname[0] == '\0' ? 0 : 1;
}

// function resets handicap to new value
void handicap(golf & g, int hc) {
	g.handicap = hc;
}

// function displays contents of golf structure
void showGolf(const golf& g) {
	std::cout << "fullname: " << g.fullname << std::endl;
	std::cout << "handicap: " << g.handicap << std::endl;
}
