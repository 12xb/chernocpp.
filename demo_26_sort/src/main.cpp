#include<iostream>
#include<vector>
#include<algorithm>

int main() {
	std::vector<int> array = { 1,3,2,4,5 };
	std::sort(array.begin(), array.end(), [](int a, int b) { //������ʵ���˴�С�������򣬲��Ұ�1�ŵ����
			if (a == 1)
				return false;
			if (b == 1)
				return true;
			return a < b;
		});

	for (int i = 0; i < array.size(); i++)
		std::cout << array[i] << std::endl;

	std::cin.get();

	return 0;
}