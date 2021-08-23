#include <iostream>
#include <string>
#include <vector>
#include <limits>

class Contact {
public:
	std::string numberPhone;
	std::string name;
};

class Phone {

private:
	
	std::vector<Contact> addressBook;

public:

	void add() {
		Contact* contact = new Contact;
		std::cout << "Enter the phone number of the subscriber: ";
		std::getline(std::cin, contact->numberPhone);
		std::cout << "Enter the name of the subscriber: ";
		std::getline(std::cin, contact->name);
		addressBook.push_back(*contact);
		delete contact;
		contact = nullptr;
	}

	void call() {
		std::string request;
		std::cout << "Enter the phone number or the name  of the subscriber: ";
		std::getline(std::cin, request);
		for (int i = 0; i < addressBook.size(); i++) {
			if ((request == addressBook[i].name) || (request == addressBook[i].numberPhone)) {
				std::cout << "CALL " << addressBook[i].numberPhone << "\n";
				return;
			}
		}
		std::cout << "The subscriber was not found!\n";
	}

	void sms() {
		std::string request, message;
		std::cout << "Enter the phone number or the name  of the subscriber: ";
		std::getline(std::cin, request);
		for (int i = 0; i < addressBook.size(); i++) {
			if ((request == addressBook[i].name) || (request == addressBook[i].numberPhone)) {
				std::cout << "Enter a message: ";
				std::getline(std::cin, message);
				std::cout << "A message has been sent to the subscriber with the number " << addressBook[i].numberPhone << "\n";
				return;
			}
		}
		std::cout << "The subscriber was not found!\n";
	}
};

int main() {
	Phone* phone = new Phone;
	std::string command;
	do {
		do {
			std::cout << "Enter the command: ";
			std::cin >> command;
			std::cin.ignore(std::numeric_limits<int>::max(), '\n');
			if (command != "call" && command != "sms" && command != "add" && command != "exit") {
				std::cout << "The command is not correct!\n";
			}
		} while (command != "call" && command != "sms" && command != "add" && command != "exit");

		if (command == "add") {
			phone->add();
		}

		else if (command == "call") {
			phone->call();
		}

		else if (command == "sms") {
			phone->sms();
		}
		else if (command == "exit") {
			delete phone;
			phone = nullptr;
			return 0;
		}
	} while (true);
}
