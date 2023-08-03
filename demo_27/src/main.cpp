#include<iostream>

class Base {
public:
	Base() {
		std::cout << "Base Constructor!" << std::endl;
	}
	virtual ~Base() {
		std::cout << "Base Destructor!" << std::endl;
	}
};

class Derived : public Base {
public:
	Derived() {
		std::cout << "Derived Constructor" << std::endl;
	}
	~Derived() {
		std::cout << "Derived Destructor" << std::endl;
	}
};

int main() {
	Base* base = new Base();
	delete base;

	std::cout << "------------------------" << std::endl;

	Derived* derived = new Derived();
	delete derived;

	std::cout << "------------------------" << std::endl;
	Base* de = new Derived();
	delete de;

	std::cin.get();

	return 0;
}