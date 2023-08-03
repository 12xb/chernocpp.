#include<iostream>

class Example {
private:
	int x;
public:
	Example() : x(0) {
		std::cout << "x = 0" << std::endl;
	}
	Example(int x1) : x(x1) {
		std::cout << "x = " << x1 << std::endl;
	}
};

class Entity {
private:
	std::string name;
	Example e;
public:
	Entity() :name("šÝ¤Þ¤°¤ì¥ô¥£©`¥Ê¥¹"), e() {
		std::cout << "default Constructor!" << std::endl;
		std::cout << name << std::endl;
	}

	Entity(std::string name1, int x1) : name(name1), e(x1) {
		std::cout << name << std::endl;
	}
};

int main() {
	Entity e1("Sakurada Junko", 2);
	Entity e2;

	std::cin.get();

	return 0;
}