#include<iostream>

int main() {
	int a = 1;
	int b = 2;

	const int* ptr1 = &a;
	int* const ptr2 = &a;

	//*ptr1 = 20; ���� ֵ���ܸı�
	ptr1 = &b; //��ȷ

	*ptr2 = 100;
	//ptr2 = &b; ���� ָ������ݲ��ܸı�

	std::cin.get();

	return 0;
}