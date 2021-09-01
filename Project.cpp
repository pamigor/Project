#include <iostream>
#include <string>
#include <vector>

class BigBranch {
	int numberBranch = 0;
	std::string house;
	std::vector<std::string> branchs;

	public:

	BigBranch() {
		numberBranch = std::rand() % 2 + 2;
		std::string name;
		for (int i = 0; i < numberBranch; i++) {
			std::cout << "Enter the name of the elf: ";
			std::cin >> name;
			branchs.push_back(name);
		}
		std::cout << "Enter the name of the elf: ";
		std::cin >> name;
		house = name;
	}

	BigBranch* search_branch(std::string name) {
		for (int i = 0; i < numberBranch; i++) {
			if (name == branchs[i] || name == house) {
				return this;
			}
		}
		return nullptr;
	}

	void elf_neighbors(std::string name) {
		for (int i = 0; i < numberBranch; i++) {
			if (name != branchs[i] && branchs[i] != "None") {
				std::cout << branchs[i] << ", ";
			}
		}
		if (name != house && house != "None") {
			std::cout << house;
		}
		std::cout << "\n";
	}
};

class Tree {
	int numberBigBranch = 0;
	std::vector<BigBranch*> bigBranchs;

public:

	Tree() {
		numberBigBranch = std::rand() % 3 + 3;
		for (int i = 0; i < numberBigBranch; i++) {
			BigBranch* bigBranch = new BigBranch();
			bigBranchs.push_back(bigBranch);
		}
	}

	BigBranch* search_big_brench(std::string name) {
		for (int i = 0; i < numberBigBranch; i++) {
			if (bigBranchs[i]->search_branch(name) != nullptr) {
				return bigBranchs[i]->search_branch(name);
			}
		}
		return nullptr;
	}
};

class Village {
	Tree** trees;

public:
	
	Village() {
		trees = new Tree*[5];
		for (int i = 0; i < 5; i++) {
			trees[i] = new Tree();
		}
	}

	BigBranch* search_tree(std::string name) {
		for (int i = 0; i < 5; i++) {
			if (trees[i]->search_big_brench(name) != nullptr) {
				return trees[i]->search_big_brench(name);
			}
		}
		return nullptr;
	}
};

int main() {
	std::srand(std::time(nullptr));
	Village* village = new Village();

	std::string nameElf;
	std::cout << "\nEnter the name of the elf you want to find: ";
	std::cin >> nameElf;
	BigBranch* elf = village->search_tree(nameElf);
	if (elf == nullptr) {
		std::cout << "\nAn elf with this name does not live in the village.";
	}
	else {
		std::cout << "Neighbors of an elf named " << nameElf << ": ";
		elf->elf_neighbors(nameElf);
	}
	delete village;
	village = nullptr;
}
