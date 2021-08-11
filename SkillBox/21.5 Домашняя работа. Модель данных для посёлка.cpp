#include <algorithm>
#include <climits>
#include <cmath>
#include <conio.h>
#include <cstdio>
#include <cstdlib>
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
#include <vector>
//#include <windows.h>

//using namespace std;
//setlocale(LC_ALL, "RUS");
//SetConsoleCP(1251);
//SetConsoleOutputCP(1251);

enum roomType { /*Тип комнаты*/
    BEDROOM = 1,
    KITCHEN = 2,
    BATHROOM = 4,
    CHILDRENS = 8,
    LIVING_ROOM = 16,
};

enum buildingsType { /*Тип строения*/
    HOUSE = 1,
    GARAGE = 2,
    BARN = 4,
    BATHHOUSE = 8,
    GREENHOUSE = 16,
};

struct room { /*Комната*/
    int type;
    float area;
};

struct level { /*Этаж*/
	int roomCount;
    float topHeight;
    std::vector<room> rooms;
};

struct construction { /*Строение*/
    int type;
    float area;
    int levelCount;
    bool stove;
    std::vector<level> levelsHouse;
};

struct region { /*Участок*/
    int number;
    float area;
    int constructionsCount;
    std::vector<construction> constructions;
};

struct village { /*Поселок*/
    std::vector<region> regions;
};

std::string type_constructions(village& v, int i, int j) {
    int type = v.regions[i].constructions[j].type;
    std::string building;
    switch (type) {
    case HOUSE:
        building = "HOUSE";
        break;
    case GARAGE:
        building = "GARAGE";
        break;
    case BARN:
        building = "BARN";
        break;
    case BATHHOUSE:
        building = "BATHHOUSE";
        break;
    case GREENHOUSE:
        building = "GREENHOUSE";
    }
    return building;
}

void data_regions(village& v, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << "We fill in the data for the " << i + 1 << " plot.\n";
        v.regions[i].number = i;

        float area;
        do {
            std::cout << "Enter the area of the " << i + 1 << " plot: ";
            std::cin >> area;
            if (area <= 0) {
                std::cerr << "The plot area cannot be less than or equal to zero!\n";
            }
        } while (area <= 0);
        v.regions[i].area = area;

        int counter;
        do {
            std::cout << "Specify the total number of buildings on " << i + 1 << " plot: ";
            std::cin >> counter;
            if (counter < 0 || counter > 5) {
                std::cerr << "The value cannot be negative or more than five!\n";
            }
        } while (counter < 0 || counter > 5);
        if (n == 0) {
            continue;
        }
        v.regions[i].constructionsCount = counter;
        v.regions[i].constructions.resize(counter);
    }
}

void date_constructions(village& v, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << "We fill in the data on the buildings of the " << i + 1 << " plot.\n";
        for (int j = 0; j < v.regions[i].constructionsCount; j++) {
            int type;
            do {
                std::cout << "Enter the type of the  " << j + 1 << " building:\n";
                std::cout << "HOUSE - 1\n";
                std::cout << "GARAGE - 2\n";
                std::cout << "BARN - 3\n";
                std::cout << "BATHHOUSE - 4\n";
                std::cout << "GREENHOUSE - 5\n";
                std::cin >> type;
                if (type < 1 || type > 5) {
                    std::cerr << "The value cannot be less than one or exceed five!\n";
                }
            } while (type < 1 || type > 5);
            v.regions[i].constructions[j].type |= (1 << (type - 1));
            
            float area;
            do {
                std::cout << "Enter the area of the " << type_constructions(v, i, j) << ": ";
                std::cin >> area;
                if (area <= 0) {
                    std::cerr << "The plot area cannot be less than or equal to zero!\n";
                }
            } while (area <= 0);
            v.regions[i].constructions[j].area = area;
            
            if (v.regions[i].constructions[j].type & HOUSE) {
                int floorCount;
                do {
                    std::cout << "Enter the number of floors of the " << type_constructions(v, i, j) << ": ";
                    std::cin >> floorCount;
                    if (floorCount < 1 || floorCount > 3) {
                        std::cerr << "The number of floors can not be less than one and more than three!\n";
                    }
                } while (floorCount < 1 || floorCount > 3);
                v.regions[i].constructions[j].levelCount = floorCount;
                v.regions[i].constructions[j].levelsHouse.resize(floorCount);

                std::string stove;
                do {
                    std::cout << "The presence of a furnace with a pipe in " << type_constructions(v, i, j) << ": ";
                    std::cin >> stove;
                    if (stove != "yes" && stove != "no") {
                        std::cerr << "The answer should be yes or no!\n";
                    }
                } while (stove != "yes" && stove != "no");
                if (stove == "yes") {
                    v.regions[i].constructions[j].stove = true;
                }
                else {
                    v.regions[i].constructions[j].stove = false;
                }
            }
            if (v.regions[i].constructions[j].type & BATHHOUSE) {
                std::string stove;
                do {
                    std::cout << "The presence of a furnace with a pipe in " << type_constructions(v, i, j) << ": ";
                    std::cin >> stove;
                    if (stove != "yes" && stove != "no") {
                        std::cerr << "The answer should be yes or no!\n";
                    }
                } while (stove != "yes" && stove != "no");
                if (stove == "yes") {
                    v.regions[i].constructions[j].stove = true;
                }
                else {
                    v.regions[i].constructions[j].stove = false;
                }
            }
        }
    }
}

void date_level(village& v, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < v.regions[i].constructionsCount; j++) {
            if (v.regions[i].constructions[j].type & HOUSE) {
                std::cout << "We fill in the data on the HOUSE of the " << i + 1 << " plot.\n";
                for (int k = 0; k < v.regions[i].constructions[j].levelCount; k++) {
                    float height;
                    do {
                        std::cout << "Enter the height of the ceilings on the " << k + 1 << " floor of the HOUSE: ";
                        std::cin >> height;
                        if (height < 2.5f) {
                            std::cerr << "The ceiling height can not be less than 2.5 meters!\n";
                        }
                    } while (height < 2.5f);
                    v.regions[i].constructions[j].levelsHouse[k].topHeight = height;
                    
                    int counter;
                    do {
                        std::cout << "Enter the number of rooms on the " << k + 1 << " floor of the HOUSE: ";
                        std::cin >> counter;
                        if (counter < 2 || counter > 4) {
                            std::cerr << "The number of rooms can not be less than two and more than four!\n";
                        }
                    } while (counter < 2 || counter > 4);
                    v.regions[i].constructions[j].levelsHouse[k].roomCount = counter;
                    v.regions[i].constructions[j].levelsHouse[k].rooms.resize(counter);
                }
            }
        }
    }
}

void date_room(village& v, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < v.regions[i].constructionsCount; j++) {
            if (v.regions[i].constructions[j].type & HOUSE) {
                for (int k = 0; k < v.regions[i].constructions[j].levelCount; k++) {
                    for (int m = 0; m < v.regions[i].constructions[j].levelsHouse[k].roomCount; m++) {
                        int type;
                        do {
                            std::cout << "Enter the type of the  " << m + 1 << " room:\n";
                            std::cout << "BEDROOM - 1\n";
                            std::cout << "KITCHEN - 2\n";
                            std::cout << "BATHROOM - 3\n";
                            std::cout << "CHILDRENS - 4\n";
                            std::cout << "LIVING_ROOM - 5\n";
                            std::cin >> type;
                            if (type < 1 || type > 5) {
                                std::cerr << "The value cannot be less than one or exceed five!\n";
                            }
                        } while (type < 1 || type > 5);
                        v.regions[i].constructions[j].levelsHouse[k].rooms[m].type |= (1 << (type - 1));
                        
                        float area;
                        do {
                            std::cout << "Enter the area of the room: ";
                            std::cin >> area;
                            if (area <= 0) {
                                std::cerr << "The plot area cannot be less than or equal to zero!\n";
                            }
                        } while (area <= 0);
                        v.regions[i].constructions[j].levelsHouse[k].rooms[m].area = area;
                    }
                }
            }
        }
    }
}

int main() {
    village village;
    int numberRegion;
    do {
        std::cout << "Enter the number of plots in the village: ";
        std::cin >> numberRegion;
        if (numberRegion < 0) {
            std::cerr << "The value cannot be negative!\n";
        }
    } while (numberRegion < 0);
   village.regions.resize(numberRegion);
   data_regions(village, numberRegion);
   date_constructions(village, numberRegion);
   date_level(village, numberRegion);
   date_room(village, numberRegion);

   float villageArea = 0;
   for (int i = 0; i < numberRegion; i++) {
       villageArea += village.regions[i].area;
   }
   
   float constructionsArea = 0;
   for (int i = 0; i < numberRegion; i++) {
       for (int j = 0; j < village.regions[i].constructionsCount; j++) {
           constructionsArea += village.regions[i].constructions[j].area;
       }
   }
   std::cout.setf(std::ios::fixed);
   std::cout.precision(2);
   std::cout << "\nBuildings occupy " << constructionsArea / villageArea * 100.0f << "% of the total area of the village\n";
}