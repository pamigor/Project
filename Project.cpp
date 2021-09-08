#include <cassert>
#include <cstdlib>
#include <ctime>
#include <iostream>

class Command {
	int numberManager = 0;
	int numberPeople = 0;
	int numberPeopleEmployed = 0;
	bool employmentIndicator = true;
	char* people = nullptr;

public:

	Command(int inNumberPeople, int inNumberManager) : numberPeople(inNumberPeople), numberManager(inNumberManager) {
		assert(inNumberPeople > 0);
		assert(inNumberManager > 0);
		people = new char[numberPeople];
	}

	int selecting_tasks(int commandManager) {
		int numberTask = numberManager + commandManager;
		numberTask = std::rand() % numberTask + 1;
		return numberTask;
	}

	void distribution_tasks(int numberTask) {
		char taskType[] = { 'A', 'B', 'C' };
		if (numberTask > numberPeople - numberPeopleEmployed) {
			numberTask = numberPeople - numberPeopleEmployed;
		}
		
		for (int i = numberPeopleEmployed; i < numberPeopleEmployed + numberTask; i++) {
			int j = std::rand() % 3;
			people[i] = taskType[j];
		}
		numberPeopleEmployed += numberTask;
		
		if (numberPeople == numberPeopleEmployed) {
			employmentIndicator = false;
		}
	}

	bool get_employment_indicator() {
		return employmentIndicator;
	}
};

class Company {
	
	int numberCommand;
	Command** companyStructure = nullptr;

public:

	Company(int inNumberCommand) : numberCommand(inNumberCommand) {
		assert(inNumberCommand > 0);
		companyStructure = new Command * [inNumberCommand];
		for (int i = 0; i < numberCommand; i++) {
			std::cout << "Enter the number of employees in " << i + 1 << " team: ";
			int inNumberPeople = 0;
			std::cin >> inNumberPeople;
			companyStructure[i] = new Command(inNumberPeople, i + 1);
		}
	}

	Command* get_company_structure(int index) {
		if ((index < 0) || (index > numberCommand)) {
			return nullptr;
		}
		return companyStructure[index];
	}
};

int main() {
	std::srand(std::time(nullptr));
	int numberCommand;
	bool flag = false;
	std::cout << "Enter the number of commands: ";
	std::cin >> numberCommand;
	Company* company = new Company(numberCommand);

	do {
		flag = false;
		std::cout << "Enter the manager's command: ";
		int commandManager;
		std::cin >> commandManager;
		for (int i = 0; i < numberCommand; i++) {
			if (company->get_company_structure(i)->get_employment_indicator()) {
				int numberTask = company->get_company_structure(i)->selecting_tasks(commandManager);
				company->get_company_structure(i)->distribution_tasks(numberTask);
				if (company->get_company_structure(i)->get_employment_indicator()) {
					flag = true;
				};
			};
		}
	} while (flag);
	std::cout << "\nTasks have been set for all employees!\n";
	
	delete company;
	company = nullptr;
}
