#include <cassert>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

class Worker {
	char taskType = ' ';

public:

	Worker(char inTaskType) : taskType(inTaskType) {
	}
};

class Manager {
	int numberManager = 0;

public:

	Manager(int inNumberManager) : numberManager(inNumberManager) {
	}

	char type_task() {
		char taskType[] = { 'A', 'B', 'C' };
		int j = std::rand() % 3;
		return taskType[j];
	}

	int selecting_tasks(int commandHeadCompany) {
		int numberTask = numberManager + commandHeadCompany;
		numberTask = std::rand() % numberTask + 1;
		return numberTask;
	}
};

class Command : public Manager {
	int numberWorkers = 0;
	int numberEmployeesWorkers = 0;
	bool employmentIndicator = false;
	std::vector<Worker*> workers;

public:

	Command(int inNumberManager) : Manager(inNumberManager) {
		std::cout << "Enter the number of employees in " << inNumberManager << " team: ";
		int inNumberWorkers = 0;
		std::cin >> inNumberWorkers;
		set_number_workers(inNumberWorkers);
	}

	void distribution_tasks(int commandHeadCompany) {
		int numberTasks = selecting_tasks(commandHeadCompany);
		if (selecting_tasks(commandHeadCompany) > (numberWorkers - numberEmployeesWorkers)) {
			numberTasks = numberWorkers - numberEmployeesWorkers;
		}
		for (int i = 0; i < numberTasks; i++) {
			Worker* worker = new Worker(type_task());
			workers.push_back(worker);
		}
		numberEmployeesWorkers += numberTasks;
		if (numberWorkers == numberEmployeesWorkers) {
			employmentIndicator = true;
		}
	}

	void set_number_workers(int inNumberWorkers) {
		numberWorkers = inNumberWorkers;
	}

	bool get_employment_indicator() {
		return employmentIndicator;
	}

	void delete_workers() {
		for (int i = 0; i < numberWorkers; i++) {
			delete workers[i];
		}
	}
};

class HeadCompany {
	int numberCommand = 0;
	std::vector<Command*> companyStructure;

public:

	HeadCompany(int inNumberCommand) : numberCommand(inNumberCommand) {
		for (int i = 0; i < numberCommand; i++) {
			Command* command = new Command(i + 1);
			companyStructure.push_back(command);
		}
	}

	void instructions_head_company() {
		int instruction = 0;
		std::cout << "Enter the supervisor's instruction: ";
		std::cin >> instruction;
		for (int i = 0; i < numberCommand; i++) {
			if (companyStructure[i]->get_employment_indicator() == false) {
				companyStructure[i]->distribution_tasks(instruction);
			}
		}
	}

	int checking_workload() {
		int counter = 0;
		for (int i = 0; i < numberCommand; i++) {
			if (companyStructure[i]->get_employment_indicator() == true) {
				counter++;
			}
		}
		return counter;
	}

	void delete_command() {
		for (int i = 0; i < numberCommand; i++) {
			companyStructure[i]->delete_workers();
			delete companyStructure[i];
		}
	}
};

int main() {
	std::srand(std::time(nullptr));
	int numberCommand;
	int counter = 0;
	std::cout << "Enter the number of commands: ";
	std::cin >> numberCommand;
	HeadCompany* headCompany = new HeadCompany(numberCommand);

	do {
		counter = 0;
		headCompany->instructions_head_company();
		counter = headCompany->checking_workload();
	} while (counter != numberCommand);
	
	std::cout << "\nTasks have been set for all employees!\n";
	
	headCompany->delete_command();
	delete headCompany;
	headCompany = nullptr;
}
