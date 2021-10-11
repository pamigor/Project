#include <cpr/cpr.h>
#include <iostream>

int main() {
	std::string command;
	do {
		do {
			std::cout << "Enter the command: ";
			std::cin >> command;
			std::cout << "\n";
			if (command != "get" && command != "post" && command != "put" && command != "delete" && command != "patch" && command != "exit" && command != "headers") {
				std::cerr << "\nThe command entered is not correct!\n";
			}
		} while (command != "get" && command != "post" && command != "put" && command != "delete" && command != "patch" && command != "exit" && command != "headers");
	
		if (command == "get") {
			cpr::Response r = cpr::Get(cpr::Url("https://httpbin.org/get"));
			std::cout << r.text << "\n";
		}
		
		if (command == "headers") {
			cpr::Response r = cpr::Get(cpr::Url("https://httpbin.org/headers"));
			std::cout << r.text << "\n";
		}

		else if (command == "post") {
			cpr::Response r = cpr::Get(cpr::Url("https://httpbin.org/post"));
			std::cout << r.text << "\n";
		}
		
		else if (command == "put") {
			cpr::Response r = cpr::Get(cpr::Url("https://httpbin.org/put"));
			std::cout << r.text << "\n";
		}
		
		else if (command == "delete") {
			cpr::Response r = cpr::Get(cpr::Url("https://httpbin.org/delete"));
			std::cout << r.text << "\n";
		}
		
		else if (command == "patch") {
			cpr::Response r = cpr::Get(cpr::Url("https://httpbin.org/patch"));
			std::cout << r.text << "\n";
		}

		else if (command == "exit") {
			std::cout << "The program is completed.\n";
			return 0;
		}
	} while (true);
}
