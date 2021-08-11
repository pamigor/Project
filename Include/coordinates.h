#pragma once
#include <iostream>

struct point {
	double x, y;
};

void input_coordinates(point& coord, int number) {
	std::cout << "Enter the coordinates of the " << number << " point: ";
	std::cin >> coord.x >> coord.y;
}

bool comparison_coordinates(point& coord1, point& coord2, point& coord3, point& coord4) {
    if ((coord1.x == coord3.x) && (coord1.y == coord3.y) && (coord2.x == coord4.x) && (coord2.y == coord4.y)) {
		return true;
	}
	else {
		return false;
	}
}