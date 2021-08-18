#include <algorithm>
#include <chrono>
#include <climits>
#include <cmath>
#include <conio.h>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <deque> 
#include <fstream>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <locale.h>
#include <map>
#include <math.h>
#include <set>
#include <stdlib.h>
#include <sstream>
#include <string>
#include <thread>
#include <vector>
#include <cwchar>
//#include <windows.h>

//using namespace std;
//setlocale(LC_ALL, "RUS");
//SetConsoleCP(1251);
//SetConsoleOutputCP(1251);
//#pragma warning(disable : 4996)

class Track {
public:
	std::string title;
	std::string executor;
	std::string date;
	int playingTime = 0;
};

class Player {
	
	std::vector<Track> single = { {"Matilda Mother", "Pink Floyd", "05.08.1967", 188},
						{"Remember a Day", "Pink Floyd", "29.06.1968", 273},
						{"Cirrus Minor", "Pink Floyd", "27.07.1969", 318},
						{"Money", "Pink Floyd", "23.06.1973", 384},
						{"In The Flesh", "Pink Floyd", "30.11.1979", 199} };
	bool flagPlay = false, flagPause = false;
	int numberSingle = 0;

public:

	void play() {
		if (flagPlay == true) {
			return;
		} else if (flagPlay == false && flagPause == true) {
			std::cout << "Playback \"" << single[numberSingle].title << "\", \"" << single[numberSingle].executor << "\", date of creation " << single[numberSingle].date << ", sound duration " << single[numberSingle].playingTime << " sec.\n\n";
			flagPlay = true;
			flagPause = false;
		}
		else {
			std::string title;
			std::cout << "Enter the name of the song: ";
			std::getline(std::cin, title);
			for (int i = 0; i < single.size(); i++) {
				if (title == single[i].title) {
					std::cout << "Playback \"" << single[i].title << "\", \"" << single[i].executor << "\", date of creation " << single[i].date << ", sound duration " << single[i].playingTime << " sec.\n\n";
					flagPlay = true;
					numberSingle = i;
					return;
				}
			}
			std::cout << "There is no such song in the player!\n";
		}
	}

	void pause() {
		if (flagPlay == true && flagPause == false) {
			std::cout << "Playback is stopped!\n";
			flagPlay = false;
			flagPause = true;
		} else if (flagPlay == false && flagPause == false) {
			return;
		} else if (flagPlay == false && flagPause == true) {
			return;
		}
	}

	void next() {
		if (flagPlay == true) {
			std::srand(std::time(nullptr));
			numberSingle = std::rand() % (single.size() - 1);
			std::cout << "Playback \"" << single[numberSingle].title << "\", \"" << single[numberSingle].executor << "\", date of creation " << single[numberSingle].date << ", sound duration " << single[numberSingle].playingTime << " sec.\n";
		}
	}

	void stop() {
		if (flagPlay == true) {
			std::cout << "Playback is off!\n";
			flagPlay = false;
		}
	}

	void add() {
		Track* track = new Track;
		std::cout << "Enter the name of the song: ";
		std::getline(std::cin, track->title);
		std::cout << "Enter the artist: ";
		std::getline(std::cin, track->executor);
		std::cout << "Enter the date when the song was created: ";
		std::getline(std::cin, track->date);
		std::cout << "Enter the duration of the song: ";
		std::cin >> track->playingTime;
		single.push_back(*track);
	}
};

int main() {
	Player* player = new Player;
	std::string command;
	do {
		do {
			std::cout << "Enter the command: ";
			std::getline(std::cin, command);
			//std::cin >> command;
			if (command != "play" && command != "pause" && command != "next" && command != "stop" && command != "add" && command != "exit") {
				std::cout << "The command is not correct!\n";
			}
		} while (command != "play" && command != "pause" && command != "next" && command != "stop" && command != "add" && command != "exit");
		
		if (command == "play") {
			player->play();
		}

		if (command == "pause") {
			player->pause();
		}

		if (command == "next") {
			player->next();
		}

		if (command == "stop") {
			player->stop();
		}

		if (command == "add") {
			player->add();
		}

		if (command == "exit") {
			return 0;
		}
	} while (true);
}
