#pragma once
#include <iostream>
#include "coordinates.h"

void scalpel(point& beginPath, point& endPath) {
	std::cout << "A section was made from a point with coordinates {" << beginPath.x << ", " << beginPath.y << "} to a point with coordinates {" << endPath.x << ", " << endPath.y << "}.\n";
}

void hemostat(point& beginPath) {
	std::cout << "The clamp is placed at the point with the coordinates {" << beginPath.x << ", " << beginPath.y << "}\n";
}

void tweezers(point& beginPath) {
	std::cout << "The tweezers are installed at the point with the coordinates {" << beginPath.x << ", " << beginPath.y << "}\n";
}

void suture(point& beginPath, point& endPath) {
	std::cout << "A seam is made between the point with coordinates {" << beginPath.x << ", " << beginPath.y << "} and point with coordinates \{" << endPath.x << ", " << endPath.y << "\}.\n";
}
