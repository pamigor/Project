#include <iostream>
#include <string>
#include <cpr/cpr.h>


class Dog;
class Cat;

class Animal {

public:	
	virtual void meeting(Animal* a) = 0;	
	virtual void meeting(Cat* a) = 0;	
	virtual void meeting(Dog* a) = 0;	
};

class Dog : public Animal {
public:
	virtual void meeting(Cat* a) {
		std::cout << "Meow Bark\n";
	};

	virtual void meeting(Dog* a) {
		std::cout << "Woof Woof\n";
	};

	virtual void meeting(Animal* a) {
		a->meeting(this);
	};
};

class Cat : public Animal {
public:
	virtual void meeting(Dog* a) {
		std::cout << "Bark Meow\n";
	};

	virtual void meeting(Cat* a) {
		std::cout << "Purr Purr\n";
	};

	virtual void meeting(Animal* a) {
		a->meeting(this);
	};
};

void meeting(Animal* a, Animal* b) {
	a->meeting(b);
};

int main() {
	Animal* a = new Dog();
	Animal* b = new Cat();
	Animal* c = new Cat();
	Animal* d = new Dog();

	meeting(a, d);
	meeting(a, b);
	meeting(b, a);
	meeting(b, c);
	std::cout << "\n";

	delete a;
	delete b;
	delete c;
	delete d;

}