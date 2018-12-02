#include "person.h"
#include <iostream>

Person::Person() {
	mLastName = "";
	mFirstName[0] = '\0';
}

Person::Person(const std::string& ln, const char* fn): mLastName(ln) {
	int i;
	for (; i < LIMIT - 1 && fn[i] != '\0'; ++i) {
		mFirstName[i] = fn[i];
	}
	mFirstName[i] = '\0';
}

void Person::Show() const {
	std::cout << mFirstName << ' ' << mLastName;
}

void Person::FormalShow() const {
	std::cout << mLastName << ", " << mFirstName;
}
