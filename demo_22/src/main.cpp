#include<iostream>

void Print() {
	std::cout << "Hahan" << std::endl;
}

int main() {
	typedef void(*Function)();
	Function fun = Print;
	fun();

	std::cin.get();

	return 0;
}