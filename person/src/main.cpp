#include "person.h"
#include <iostream>

int main() {
	Person peter("Peter");
	peter.Show();
	std::cout << std::endl;
	peter.FormalShow();
	std::cout << std::endl;
	
	Person jane("Jane", "Smith");
	jane.Show();
	std::cout << std::endl;
	jane.FormalShow();
	std::cout << std::endl;
	
	// last name 24 chars long
	Person longName("Patrick", "Qwertyuioplkjhgfdsazxcvb");
	longName.Show();
	std::cout << std::endl;
	longName.FormalShow();
	std::cout << std::endl;
	
	// last name longer than 24 chars
	Person longerName("Samantha", "Qwertyuioplkjhgfdsazxcvbnm");
	longerName.Show();
	std::cout << std::endl;
	longerName.FormalShow();
	std::cout << std::endl;
	
	return 0;
}
