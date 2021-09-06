#include <cassert>
#include <cmath>
#include <iostream>
#include <string>

#define PI 3.14159265358979323846

enum class Colours {
	YELLOW,
	RED,
	BLUE,
	BLACK,
	WHITE,
	GREY,
	BROWN,
	GREEN,
	ORANG,
	NONE
};

class Figure {
	
	double centreX = 0;
	double centreY = 0;
	
public:

	Colours colour;

	Figure(double inCentreX, double inCentreY, Colours inColour) : centreX(inCentreX), centreY(inCentreY), colour(inColour) {
	}
};

class Circle : public Figure {
	
	double radius = 0;

public:

	Circle(double inCentreX, double inCentreY, Colours inColour, double inRadius) : Figure(inCentreX, inCentreY, Colours::NONE), radius(inRadius) {
		assert(inRadius >= 0);
	}

	void area_circle() {
		std::cout.precision(2);
		std::cout << std::fixed << "\nThe area of the circle: " << PI * radius * radius << "\n";
		std::cout << "The area of the describing rectangle: " << 4 * radius * radius << "\n\n";
	}
};


class Triangle: public Figure {
	double side = 0;

public:

	Triangle(double inCentreX, double inCentreY, Colours inColour, double inSide) : Figure(inCentreX, inCentreY, inColour), side(inSide) {
		assert(inSide >= 0);
	}

	void area_triangle() {
		double area = 0;
		area = (std::sqrt(3) / 4) * side * side;
		std::cout.precision(2);
		std::cout << std::fixed << "\nThe area of the triangle: " << area << "\n";
		std::cout << "The area of the describing rectangle: " << std::sqrt(std::sqrt(3) * area) * side << "\n\n";
	}
};

class Square : public Figure {
	double side = 0;

public:

	Square(double inCentreX, double inCentreY, Colours inColour, double inSide) : Figure(inCentreX, inCentreY, inColour), side(inSide) {
		assert(inSide >= 0);
	}

	void area_square() {
		std::cout.precision(2);
		std::cout << std::fixed << "\nThe area of the square: " << side * side << "\n";
		std::cout << "The area of the describing rectangle: " << side * side << "\n\n";
	}
};

class Rectangle : public Figure {
	double sideOne = 0;
	double sideTwo = 0;

public:

	Rectangle(double inCentreX, double inCentreY, Colours inColour, double inSideOne, double inSideTwo) : Figure(inCentreX, inCentreY, inColour), sideOne(inSideOne), sideTwo(inSideTwo) {
		assert(inSideOne >= 0);
		assert(inSideTwo >= 0);
	}

	void area_rectangle() {
		std::cout.precision(2);
		std::cout << std::fixed << "\nThe area of the square: " << sideOne * sideTwo << "\n";
		std::cout << "The area of the describing rectangle: " << sideOne * sideTwo << "\n\n";
	}
};


int main() {

	do {
		std::string command;
		double inCentreX, inCentreY;
		do {
			std::cout << "Enter the command: ";
			std::cin >> command;
			if (command != "circle" && command != "triangle" && command != "square" && command != "rectangle" && command != "exit") {
				std::cout << "The command is not correct!\n";
			}
		} while (command != "circle" && command != "triangle" && command != "square" && command != "rectangle" && command != "exit");

		if (command == "circle") {
			std::cout << "Enter the coordinates of the center of the circle: ";
			std::cin >> inCentreX >> inCentreY;
			double inRadius;
			std::cout << "Enter the radius of the circle: ";
			std::cin >> inRadius;
			Circle* circle = new Circle(inCentreX, inCentreY, Colours::YELLOW, inRadius);
			circle->area_circle();
			
			delete circle;
			circle = nullptr;
		}

		else if (command == "triangle") {
			std::cout << "Enter the coordinates of the center of the triangle: ";
			std::cin >> inCentreX >> inCentreY;
			double inSide;
			std::cout << "Enter the side of the triangle: ";
			std::cin >> inSide;

			Triangle* triangle = new Triangle(inCentreX, inCentreY, Colours::RED, inSide);
			triangle->area_triangle();

			delete triangle;
			triangle = nullptr;
		}

		else if (command == "square") {
			std::cout << "Enter the coordinates of the center of the square: ";
			std::cin >> inCentreX >> inCentreY;
			double inSide;
			std::cout << "Enter the side of the square: ";
			std::cin >> inSide;

			Square* square = new Square(inCentreX, inCentreY, Colours::BLACK, inSide);
			square->area_square();

			delete square;
			square = nullptr;
		}

		else if (command == "rectangle") {
			std::cout << "Enter the coordinates of the center of the rectangle: ";
			std::cin >> inCentreX >> inCentreY;
			double inSideOne, inSideTwo;
			std::cout << "Enter the one side of the rectangle: ";
			std::cin >> inSideOne;
			std::cout << "Enter the two side of the rectangle: ";
			std::cin >> inSideTwo;

			Rectangle* rectangle = new Rectangle(inCentreX, inCentreY, Colours::BLUE, inSideOne, inSideTwo);
			rectangle->area_rectangle();

			delete rectangle;
			rectangle = nullptr;
		}

		else if (command == "exit") {
			return 0;
		}
	} while (true);
}
