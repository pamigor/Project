#include <iostream>


class Toy {
	std::string name;

public:

	Toy(std::string inName) : name(inName) {}
	Toy(): name("Nameless") {}
	~Toy() {}
};

class Counter {
	int number = 0;

public:

	int get_number() {
		return number;
	}

	void add_number() {
		number++;
	}

	void substruct_number() {
		number--;
	}
};

class Shared_ptr_toy {
	Toy* pointer;
	Counter* counter;

public:

	Shared_ptr_toy() {
		pointer = new Toy();
		counter = new Counter();
	}
	
	Shared_ptr_toy(std::string name) {
		pointer = new Toy(name);
		counter = new Counter();
	}

	Shared_ptr_toy(const Shared_ptr_toy& other) {
		pointer = new Toy(*other.pointer);
		counter = other.counter;
		counter->add_number();
	}

	Shared_ptr_toy& operator = (const Shared_ptr_toy& other) {
		if (this == &other) {
			return *this;
		}
		if (pointer != nullptr) {
			delete pointer;
		}
		counter->substruct_number();
		pointer = new Toy(*other.pointer);
		counter = other.counter;
		counter->add_number();
		return *this;
	}

	~Shared_ptr_toy() {
		counter->substruct_number();
		if (counter->get_number() == 0) {
			delete pointer;
			delete counter;
		}
	}
};

Shared_ptr_toy make_shared_toy(std::string name) {
	return Shared_ptr_toy(name);
}

Shared_ptr_toy make_shared_toy(const Shared_ptr_toy& other) {
	return Shared_ptr_toy(other);
}


class Dog {
	std::string name;
	int age = 0;
	Shared_ptr_toy lovelyToy;

public:

	Dog(std::string inName, Shared_ptr_toy inToyName, int inAge) : name(inName), lovelyToy(inToyName) {
		if (inAge > 0 || inAge < 30) {
			age = inAge;
		}
	}
	Dog() : Dog("Snow", make_shared_toy("SomeToy"), 0) {}
	Dog(std::string inName) : Dog(inName, make_shared_toy("SomeToy"), 0) {}
	Dog(int inAge) : Dog("Snow", make_shared_toy("SomeToy"), inAge) {}
};

int main() {
	Shared_ptr_toy ball = make_shared_toy("Ball");
	Shared_ptr_toy bone = make_shared_toy("Bone");

	Dog a("Druzhok", ball, 3);
	Dog b("Rich", bone, 5);
}
