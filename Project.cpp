#include <cassert>
#include <chrono>
#include <cmath>
#include <ctime>
#include <iostream>
#include <mutex>
#include <string>
#include <thread>
#include <vector>

class Swimmer {
	
	std::string name;
	int speed = 0;
	int distance = 0;
	bool start = false;
	double rezult = 0;

public:

	Swimmer(std::string inName, int inSpeed): name(inName), speed(inSpeed) {
		assert(inSpeed > 0);
		rezult = 100 / speed;
	};

	void swimming() {
		if (distance < 100) {
			std::this_thread::sleep_for(std::chrono::seconds(1));
			distance += speed;
			if (distance < 100) {
				std::cout << name << " swam " << distance << " meters.\n";
				start = true;
			}
			else {
				std::cout << name << " finished.\n";
				start = false;
			}
		}
		else {
			std::cout << name << " finished.\n";
			start = false;
		}
	}

	void flow_swimming() {
		std::thread swimmerOne(&Swimmer::swimming, this);
		//swimmerOne.detach();
		swimmerOne.join();
	}

	bool get_start() {
		return start;
	}
};

class Competitions {
	Swimmer** swimmers = nullptr;

public:

	Competitions() {
		swimmers = new Swimmer * [3];
		for (int i = 0; i < 3; i++) {
			std::cout << "Enter the name of " << i + 1 << " swimmer: ";
			std::string nameSwimmer;
			std::cin >> nameSwimmer;
			std::cout << "Enter the speed of " << i + 1 << " swimmer: ";
			int speedSwimmer;
			std::cin >> speedSwimmer;
			swimmers[i] = new Swimmer(nameSwimmer, speedSwimmer);
		}
	}

	Swimmer* get_swimmers(int index) {
		if ((index < 0) || (index > 5)) {
			return nullptr;
		}
		return swimmers[index];
	}
};


int main() {
	Competitions* competitions = new Competitions();
	bool finish = false;
	do {
		finish = false;
		competitions->get_swimmers(0)->flow_swimming();
		if (competitions->get_swimmers(0)->get_start() == true) {
			finish = true;
		}

		competitions->get_swimmers(1)->flow_swimming();
		if (competitions->get_swimmers(1)->get_start() == true) {
			finish = true;
		}

		competitions->get_swimmers(2)->flow_swimming();
		if (competitions->get_swimmers(2)->get_start() == true) {
			finish = true;
		}

		//competitions->get_swimmers(3)->flow_swimming();
		//if (competitions->get_swimmers(3)->get_start() == true) {
		//	finish = true;
		//}

		//competitions->get_swimmers(4)->flow_swimming();
		//if (competitions->get_swimmers(4)->get_start() == true) {
		//	finish = true;
		//}

		//competitions->get_swimmers(5)->flow_swimming();
		//if (competitions->get_swimmers(5)->get_start() == true) {
		//	finish = true;
		//}
		std::cout << "\n";
	} while (finish);
}