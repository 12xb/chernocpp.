#include<iostream>

template<typename T> 
void print(T content) {
	std::cout << content << std::endl;
}

int main() {
	print(5);
	print(5.5f);
	print("�ݤޤ�������`�ʥ�");

	std::cin.get();

	return 0;
}