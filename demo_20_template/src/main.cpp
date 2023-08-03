#include<iostream>

template<typename T> 
void print(T content) {
	std::cout << content << std::endl;
}

int main() {
	print(5);
	print(5.5f);
	print("šÝ¤Þ¤°¤ì¥ô¥£©`¥Ê¥¹");

	std::cin.get();

	return 0;
}