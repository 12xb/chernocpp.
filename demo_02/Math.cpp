#include<iostream>
#include"Log.h"

int multiply(int a, int b) {
	Log("multiply");
	return a * b;
}

int main(void) {
	std::cout << multiply(5, 8) << std::endl;
	std::cin.get();
	return 0;
}