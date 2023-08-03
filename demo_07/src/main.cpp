#include<iostream>

struct Entity {
	static int x;
	static void print() {
		std::cout << x << std::endl;
	}
};

int Entity::x;

int main() {
	Entity::x = 1;

	Entity::x = 2;

	Entity::print();
	Entity::print();


	std::cin.get();

	return 0;
}