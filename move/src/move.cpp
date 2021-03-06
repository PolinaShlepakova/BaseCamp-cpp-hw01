#include "move.h"
#include <iostream>

// sets x, y to a, b
Move::Move(double a, double b): x(a), y(b) {}

// shows current x, y values
void Move::showmove() const {
	std::cout << "x: " << x << std::endl;
	std::cout << "y: " << y << std::endl;
}

// this function adds x of m to x of invoking object to get new x,
// adds y of m to y of invoking object to get new y, creates a new
// move object initialized to new x, y values and returns it
Move Move::add(const Move & m) const {
	return Move(x + m.x, y + m.y);
}

// resets x,y to a, b
void Move::reset(double a, double b) {
	x = a;
	y = b;
}
