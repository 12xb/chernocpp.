#include<iostream>

int main() {
	int a = 1;
	int b = 2;

	const int* ptr1 = &a;
	int* const ptr2 = &a;

	//*ptr1 = 20; 错误 值不能改变
	ptr1 = &b; //正确

	*ptr2 = 100;
	//ptr2 = &b; 错误 指向的内容不能改变

	std::cin.get();

	return 0;
}