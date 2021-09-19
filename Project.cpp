#include <cassert>
#include <chrono>
#include <cmath>
#include <ctime>
#include <iostream>
#include <mutex>
#include <string>
#include <thread>
#include <vector>

<<<<<<< HEAD
std::mutex cout_swimmer;

class Swimmer {

=======
class Swimmer {
	
>>>>>>> 234601ecb25dd4ba58a13dd768b0d6176130e089
	std::string name;
	int speed = 0;
	int distance = 0;
	bool start = false;
	double rezult = 0;

public:

<<<<<<< HEAD
	Swimmer(std::string inName, int inSpeed) : name(inName), speed(inSpeed) {
		assert(inSpeed > 0);
		rezult = (double) 100 / speed;
	};

	void swimming() {
		
		cout_swimmer.lock();
=======
	Swimmer(std::string inName, int inSpeed): name(inName), speed(inSpeed) {
		assert(inSpeed > 0);
		rezult = 100 / speed;
	};

	void swimming() {
>>>>>>> 234601ecb25dd4ba58a13dd768b0d6176130e089
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
<<<<<<< HEAD
		cout_swimmer.unlock();
	}

	Swimmer* get_this() {
		return this;
=======
	}

	void flow_swimming() {
		std::thread swimmerOne(&Swimmer::swimming, this);
		//swimmerOne.detach();
		swimmerOne.join();
>>>>>>> 234601ecb25dd4ba58a13dd768b0d6176130e089
	}

	bool get_start() {
		return start;
	}
<<<<<<< HEAD

	double get_rezult() {
		return rezult;
	}

	std::string get_name() {
		return name;
	}

};

class Competitions {
	int numberSwimmers = 6;
	std::vector<Swimmer*> swimmers;
=======
};

class Competitions {
	Swimmer** swimmers = nullptr;
>>>>>>> 234601ecb25dd4ba58a13dd768b0d6176130e089

public:

	Competitions() {
<<<<<<< HEAD
		for (int i = 0; i < numberSwimmers; i++) {
=======
		swimmers = new Swimmer * [3];
		for (int i = 0; i < 3; i++) {
>>>>>>> 234601ecb25dd4ba58a13dd768b0d6176130e089
			std::cout << "Enter the name of " << i + 1 << " swimmer: ";
			std::string nameSwimmer;
			std::cin >> nameSwimmer;
			std::cout << "Enter the speed of " << i + 1 << " swimmer: ";
			int speedSwimmer;
			std::cin >> speedSwimmer;
<<<<<<< HEAD
			Swimmer* swimmer = new Swimmer(nameSwimmer, speedSwimmer);
			swimmers.push_back(swimmer);
		}
	}

	void swimming() {
		std::thread swimmerOne(&Swimmer::swimming, swimmers[0]->get_this());
		std::thread swimmerTwo(&Swimmer::swimming, swimmers[1]->get_this());
		std::thread swimmerThree(&Swimmer::swimming, swimmers[2]->get_this());
		std::thread swimmerFour(&Swimmer::swimming, swimmers[3]->get_this());
		std::thread swimmerFive(&Swimmer::swimming, swimmers[4]->get_this());
		std::thread swimmerSix(&Swimmer::swimming, swimmers[5]->get_this());

		if (swimmerOne.joinable()) {
			swimmerOne.join();
		}
		if (swimmerTwo.joinable()) {
			swimmerTwo.join();
		}
		if (swimmerThree.joinable()) {
			swimmerThree.join();
		}
		if (swimmerFour.joinable()) {
			swimmerFour.join();
		}
		if (swimmerFive.joinable()) {
			swimmerFive.join();
		}
		if (swimmerSix.joinable()) {
			swimmerSix.join();
		}
	}

	bool end_swimming() {
		for (int i = 0; i < numberSwimmers; i++) {
			if (swimmers[i]->get_start()) {
				return true;
			}
		}
		return false;
	}

	void delete_swimmers() {
		for (int i = 0; i < numberSwimmers; i++) {
			delete swimmers[i];
		}
	}

	void rezults() {
		Swimmer* swimmer;
		for (int i = 0; i < numberSwimmers - 1; i++) {
			for (int j = 0; j < numberSwimmers - i - 1; j++) {
				if (swimmers[j]->get_rezult() > swimmers[static_cast<__int64>(j) + 1]->get_rezult()) {
					swimmer = swimmers[j];
					swimmers[j] = swimmers[static_cast<__int64>(j) + 1];
					swimmers[static_cast<__int64>(j) + 1] = swimmer;
				}
			}
		}
		std::cout << "\nTHE RESULT OF THE SWIM:\n\n";
		for (int i = 0; i < numberSwimmers; i++) {
			std::cout.precision(2);
			std::cout << std::fixed << i + 1 << " st place \t" << swimmers[i]->get_name() << "\t with the result \t" << swimmers[i]->get_rezult() << " sec.\n";
		}
=======
			swimmers[i] = new Swimmer(nameSwimmer, speedSwimmer);
		}
	}

	Swimmer* get_swimmers(int index) {
		if ((index < 0) || (index > 5)) {
			return nullptr;
		}
		return swimmers[index];
>>>>>>> 234601ecb25dd4ba58a13dd768b0d6176130e089
	}
};


int main() {
	Competitions* competitions = new Competitions();
	bool finish = false;
<<<<<<< HEAD
	std::cout << "\nSTART OF THE SWIM!!!\n\n";
	do {
		finish = false;
		competitions->swimming();
		finish = competitions->end_swimming();
		std::cout << "\n";
	} while (finish);
	competitions->rezults();
	competitions->delete_swimmers();
	delete competitions;
	competitions = nullptr;
=======
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
>>>>>>> 234601ecb25dd4ba58a13dd768b0d6176130e089
}