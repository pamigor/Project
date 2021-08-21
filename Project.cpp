#include <iostream>
#include <string>

class Window {
	int coordinateX = 0;
	int coordinateY = 0;
	int width = 0;
	int height = 0;

public:
	void setMove(int vX, int vY) {
		if (coordinateX + vX <= 2) {
			coordinateX = 2;
		}
		else if (coordinateX + vX + width - 1 > 190) {
			coordinateX = 190 - width + 1;
		}
		else {
			coordinateX += vX;
		}
		
		if (coordinateY + vY <= 1) {
			coordinateY = 1;
		}
		else if (coordinateY + vY + height - 1 > 50) {
			coordinateX = 50 - height + 1;
		}
		else {
			coordinateY += vY;
		}
	}

	void setResize(int w, int h) {
		if (w < 0) {
			std::cout << "The value is not correct!\n";
			return;
		} 
		else if (h < 0) {
			std::cout << "The value is not correct!\n";
			return;
		}
		else if (coordinateX + w - 1 > 190) {
			std::cout << "The size of the window goes beyond the screen!\n";
			return;
		}
		else if (coordinateY + h - 1 > 50) {
			std::cout << "The size of the window goes beyond the screen!\n";
			return;
		}
		else {
			width = w;
			height = h;
		}
	}

	int getCoordinateX() {
		return coordinateX;
	}

	int getCoordinateY() {
		return coordinateY;
	}

	int getWidth() {
		return width;
	}

	int getHeight() {
		return height;
	}
};

class Screen {
	int widthScreen = 192;
	int heightScreen = 50;

public:
	void output(int x, int y, int w, int h) {
		for (int i = 0; i < heightScreen + 2; i++) {
			for (int j = 0; j < widthScreen + 4; j++) {
				if ((i == 0) || (i == heightScreen + 1)) {
					std::cout << '=';
				} 
				else if (((i != 0) && (i != heightScreen + 1)) && ((j == 0) || (j == widthScreen + 3))) {
					std::cout << '|';
				} 
				else if (((i != 0) && (i != heightScreen + 1)) && ((j == 1) || (j == widthScreen + 2))) {
					std::cout << ' ';
				}

				else if (((i >= y + 1) && (i <= y + h)) && ((j >= x + 2) && (j <= x + w + 1))) {
					std::cout << ' ';
				}

				else {
					std::cout << 'O';
				}
			}
			std::cout << "\n";
		}
	}
};

int main() {
	Window* window = new Window;
	std::string command;
	do {
		do {
			std::cout << "Enter the command: ";
			//std::getline(std::cin, command);
			std::cin >> command;
			if (command != "move" && command != "resize" && command != "display" && command != "close") {
				std::cout << "The command is not correct!\n";
			}
		} while (command != "move" && command != "resize" && command != "display" && command != "close");

		if (command == "move") {
			int vecX = 0, vecY = 0;
			std::cout << "Set the window offset vector: ";
			std::cin >> vecX >> vecY;
			window->setMove(vecX, vecY);
			std::cout << "Current window coordinates: " << window->getCoordinateX() - 2 << ", " << window->getCoordinateY() - 1 << ".\n";
		}

		if (command == "resize") {
			int newW = 0, newH = 0;
			std::cout << "Enter the width and height of the window: ";
			std::cin >> newW >> newH;
			window->setResize(newW, newH);
			std::cout << "Window width: " << window->getWidth() << ", window height: " << window->getHeight() << ".\n";
		}

		if (command == "display") {
			Screen screen;
			screen.output(window->getCoordinateX(), window->getCoordinateY(), window->getWidth(), window->getHeight());
		}
		if (command == "close") {
			return 0;
		}
	} while (true);
}
