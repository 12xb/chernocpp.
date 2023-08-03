#include<iostream>

void Log(const char* message) {
	std::cout << message << std::endl;
}

int multiply(int a, int b) {
	Log("multiply");
	return a * b;
}
