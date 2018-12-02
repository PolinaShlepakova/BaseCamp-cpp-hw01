#include "move.h"
#include <iostream>

int main() {
	Move m1(5);
	Move m2(2, 8);
	Move m12 = m1.add(m2);

	std::cout << "m1: " << std::endl;
	m1.showmove();
	std::cout << "m2: " << std::endl;
	m2.showmove();
	std::cout << "m1 + m2: " << std::endl;
	m12.showmove();
	
	return 0;
}
