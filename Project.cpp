#include <iostream>
#include <string>
#include <vector>

class BigBranch {
	std::vector<std::string> branchs;
	std::string house;

public:

	void set_house(std::string name) {
		house = name;
	}

	std::string get_house() {
		return house;
	}

	std::string get_branchs(int index) {
		return branchs[index];
	}

	int length_branchs() {
		return branchs.size();
	}

	void creating_big_branch() {
		int numberBranch = std::rand() % 2 + 2;
		for (int i = 0; i < numberBranch; i++) {
			std::string name;
			std::cout << "Enter the name of the elf: ";
			std::cin >> name;
			if (name == "None") {
				name = "";
			}
			branchs.push_back(name);
		}
	}
};

class Tree {

	std::vector<BigBranch*> bigBranchs;

public:

	BigBranch* get_big_branchs(int index) {
		if ((index < 0) || (index > bigBranchs.size())) {
			return nullptr;
		}
		return bigBranchs[index];
	}

	int length_big_branchs() {
		return bigBranchs.size();
	}

	void creating_tree() {
		int numberBigBranch = std::rand() % 3 + 3;
		for (int i = 0; i < numberBigBranch; i++) {
			BigBranch* bigBranch = new BigBranch;
			bigBranch->creating_big_branch();
			std::string name;
			std::cout << "Enter the name of the elf: ";
			std::cin >> name;
			if (name == "None") {
				name = "";
			}
			bigBranch->set_house(name);
			bigBranchs.push_back(bigBranch);
		}
	}

	void delete_tree() {
		for (int i = 0; i < length_big_branchs(); i++) {
			delete bigBranchs[i];
		}
	}
};

class Elf {
	Tree* trees;

public:

	void creating_village() {
		trees = new Tree[5];
		for (int i = 0; i < 5; i++) {
			trees[i].creating_tree();
		}
	}

	void neighbors(int numberTree, int numberBigBranch, std::string name) {
		std::cout << "Neighbors of an elf named " << name << ": ";
		for (int k = 0; k < trees[numberTree].get_big_branchs(numberBigBranch)->length_branchs(); k++) {
			if (trees[numberTree].get_big_branchs(numberBigBranch)->get_branchs(k) != name) {
				std::cout << trees[numberTree].get_big_branchs(numberBigBranch)->get_branchs(k) << ", ";
			}
		}
		if (trees[numberTree].get_big_branchs(numberBigBranch)->get_house() != name) {
			std::cout << trees[numberTree].get_big_branchs(numberBigBranch)->get_house();
		}
		std::cout << "\n";
	}

	void elf_search(std::string name) {
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < trees[i].length_big_branchs(); j++) {
				for (int k = 0; k < trees[i].get_big_branchs(j)->length_branchs(); k++) {
					if (trees[i].get_big_branchs(j)->get_branchs(k) == name || trees[i].get_big_branchs(j)->get_house() == name) {
						neighbors(i, j, name);
						return;
					}
				}
			}
		}
		std::cout << "An elf with this name does not live in the village.\n";
	}

	void delete_trees() {
		for (int i = 0; i < 5; i++) {
			trees[i].delete_tree();
		}
		delete[] trees;
	}

};


int main() {
	std::srand(std::time(nullptr));
	Elf* elf = new Elf;
	elf->creating_village();

	std::string nameElf;
	std::cout << "\nEnter the name of the elf: ";
	std::cin >> nameElf;
	elf->elf_search(nameElf);

	elf->delete_trees();
	delete elf;
	elf = nullptr;
}
