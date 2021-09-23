#include <cassert>
#include <chrono>
#include <ctime>
#include <iostream>
#include <mutex>
#include <string>
#include <thread>
#include <vector>

std::mutex stopTrain;

class Train {
	int numberTrain = 0;
	int travelTime = 0;
	std::string title;

public:

	Train(int inNumberTrain, int inTravelTime, std::string inTitle) : numberTrain(inNumberTrain), travelTime(inTravelTime), title(inTitle) {

	}
	
	int get_travelTime() {
		return travelTime;
	}

	std::string get_title() {
		return title;
	}

	int get_numberTrain() {
		return numberTrain;
	}
};

class Station {
	std::string platform[3];
	std::vector<Train*> rollingStock;

public:

	void creature_station() {
		for (int i = 0; i < 3; i++) {
			platform[i] = "No";
		}
	}

	void set_platform(int index) {
		platform[index] = "In";
	}

	void creature_rollingStock() {
		for (int i = 0; i < 3; i++) {
			std::cout << "Enter the name of the train: ";
			std::string inName;
			std::cin >> inName;
			std::cout << "Enter the train travel time " << inName << ": ";
			int inTravelTime;
			std::cin >> inTravelTime;
			Train* train = new Train(i, inTravelTime, inName);
			rollingStock.push_back(train);
		}
		std::cout << "\n";
	}

	void delete_rollingStock() {
		for (int i = 0; i < 3; i++) {
			delete rollingStock[i];
		}
	}

	void train_movement(int i) {
		std::this_thread::sleep_for(std::chrono::seconds(rollingStock[i]->get_travelTime()));
		stopTrain.lock();
		std::cout << "The train " << rollingStock[i]->get_title() << " is waiting for an empty seat.\n";
		set_platform(rollingStock[i]->get_numberTrain());
		stopTrain.unlock();
	}

	void arrival_departure_train() {
		while (true) {
			int counter = 0;
			for (int i = 0; i < 3; i++) {
				if (platform[i] == "In") {
					stopTrain.lock();
					std::string command;

					do {
						std::cout << "The train " << rollingStock[i]->get_title() << " arrived at the station. Enter the command to send: ";
						std::cin >> command;
						if (command != "depart") {
							std::cout << "\nThe command is not correct!\n";
						}
					} while (command != "depart");

					platform[i] = "Out";
					std::cout << "The train " << rollingStock[i]->get_title() << " departs from the station.\n\n";
					stopTrain.unlock();
				}
				if (platform[i] == "Out") {
					counter++;
				}
				if (counter == 3) {
					return;
				}
			}
		}
	}

	void rollingStock_movement() {
		std::thread trainOne(&Station::train_movement, this, 0);
		std::thread trainTwo(&Station::train_movement, this, 1);
		std::thread trainThree(&Station::train_movement, this, 2);
		std::thread trainsOfPlatform(&Station::arrival_departure_train, this);

		
		if (trainOne.joinable()) {
			trainOne.join();
		}
		if (trainTwo.joinable()) {
			trainTwo.join();
		}
		if (trainThree.joinable()) {
			trainThree.join();
		}
		if (trainsOfPlatform.joinable()) {
			trainsOfPlatform.join();
		}

	}
};

int main() {
	Station* station = new Station();
	station->creature_station();
	station->creature_rollingStock();
	station->rollingStock_movement();
	
	station->delete_rollingStock();
	delete station;
	station = nullptr;
}
