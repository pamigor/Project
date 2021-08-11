#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>
#include <set>
#include <deque>        
#include <iterator>
#include <vector>
#include <map>
#include <locale.h> 

//using namespace std;


int main()
{
	float frequencyRadioChannels[10];
	int i = 0, numberChannel;
	std::cout << "The radio is on!\n";
	std::cout << "Moving on to setting up channels.\n";
	for (int i = 0; i < 10; i++) {
		std::cout << "Enter the frequency of the " << i + 1 << " channel: ";
		std::cin >> frequencyRadioChannels[i];
	}
	std::cout << "Channel setup is complete.\n";
	
	do {
		std::cout << "\nSelect a channel to listen to: ";
		std::cin >> numberChannel;
		if (numberChannel > 0 && numberChannel < 11) {
			std::cout << "You listen to the broadcasts on the frequency " << frequencyRadioChannels[numberChannel - 1] << "\n";
		}
		else if (numberChannel < 0 || numberChannel > 10) {
			std::cout << "There is no such channel in the settings\n";
		}
	} while (numberChannel != 0);
	std::cout << "\nThe radio is turned off.\n";
}