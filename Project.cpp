#include <iostream>
#include <string>
#include <vector>

class BigBranch {
public:
	std::vector<std::string> branchs;
	std::string house;

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
public:
	std::vector<BigBranch*> bigBranchs;

	void creating_tree() {
		int numberBigBranch = std::rand() % 3 + 3;
		for (int i = 0; i < numberBigBranch; i++) {
			BigBranch* bigBranch = new BigBranch();
			bigBranch->creating_big_branch();
			std::string name;
			std::cout << "Enter the name of the elf: ";
			std::cin >> name;
			if (name == "None") {
				name = "";
			}
			bigBranch->house = name;
			bigBranchs.push_back(bigBranch);
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
		for (int k = 0; k < trees[numberTree].bigBranchs[numberBigBranch]->branchs.size(); k++) {
			if (trees[numberTree].bigBranchs[numberBigBranch]->branchs[k] != name) {
				std::cout << trees[numberTree].bigBranchs[numberBigBranch]->branchs[k] << ", ";
			}
		}
		if (trees[numberTree].bigBranchs[numberBigBranch]->house != name) {
			std::cout << trees[numberTree].bigBranchs[numberBigBranch]->house;
		}
		std::cout << "\n";
	}

	void elf_search(std::string name) {
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < trees[i].bigBranchs.size(); j++) {
				for (int k = 0; k < trees[i].bigBranchs[j]->branchs.size(); k++) {
					if (trees[i].bigBranchs[j]->branchs[k] == name || trees[i].bigBranchs[j]->house == name) {
						neighbors(i, j, name);
						return;
					}
				}
			}
		}
		std::cout << "An elf with this name does not live in the village.\n";
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
	
	delete elf;
	elf = nullptr;
}
