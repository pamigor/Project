#include <cassert>
#include <cstdlib>
#include <ctime>
#include <iostream>

class Worker {
	bool employmentIndicator = false;
	char taskType = ' ';

public:

	Worker() {
		
	}

	Worker(bool inEmploymentIndicator, char inTaskType) : employmentIndicator(inEmploymentIndicator), taskType(inTaskType) {
	}

	bool get_employment_indicator() {
		return employmentIndicator;
	}
};

class Manager {
	int numberManager = 0;

public:

	Manager(int inNumberManager) : numberManager(inNumberManager) {
	}

	void distribution_tasks() {
		char taskType[] = { 'A', 'B', 'C' };
		int j = std::rand() % 3;
		Worker* worker;
		if (worker->get_employment_indicator() == false) {
			Worker* worker = new Worker(true, taskType[j]);
		}
	}

};

class Command : public Manager {
	int numberWorkers = 0;
	int numberWorkersEmployed = 0;
	Worker** workers = nullptr;

	Command(int inNumberManager, int inNumberWorkers) : Manager(inNumberManager), numberWorkers(inNumberWorkers) {
		workers = new Worker*[numberWorkers];

	}
};

class HeadCompany {
	int numberCommand = 0;
	Command* companyStructure = nullptr;

};

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
