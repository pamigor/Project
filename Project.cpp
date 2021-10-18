#include <cpr/cpr.h>
#include <iostream>
#include <string>
#include <vector>

class Request {
	std::string title;
	std::string meaning;

public:

	Request(std::string inTitle, std::string inMeaning) : title(inTitle), meaning(inMeaning) {}

	std::string get_title() {
		return title;
	}
	
	std::string get_meaning() {
		return meaning;
	}
};
int main() {
	std::vector<Request*> argument;
	std::string titleOne, meaningOne;

	while (true) {
		std::cout << "Enter the name of the argument: ";
		std::cin >> titleOne;
		if (titleOne == "get" || titleOne == "post") {
			break;
		}
		std::cout << "Enter the value of the argument: ";
		std::cin >> meaningOne;
		Request* request = new Request(titleOne, meaningOne);
		argument.push_back(request);
	};
	
	if (!argument.empty()) {
		if (titleOne == "get") {
			cpr::Response r;
			for (int i = 0; i < argument.size(); i++) {
				r = cpr::Get(cpr::Url{ "https://httpbin.org/get" },
					cpr::Parameters{ {argument[0]->get_title(), argument[0]->get_meaning() } });
				std::cout << r.text << "\n";
			}
		}
		else if (titleOne == "post") {
			cpr::Response r;
			for (int i = 0; i < argument.size(); i++) {
				r = cpr::Post(cpr::Url("https://httpbin.org/post"),
					cpr::Payload({ {argument[i]->get_title().c_str(), argument[i]->get_meaning().c_str()} }));
				std::cout << r.text << "\n";
			}
		}

		for (int i = 0; i < argument.size(); i++) {
			delete argument[i];
		}
	}
	else {
		std::cout << "No arguments entered!\n";
	}
}
