#include<iostream>
#include<vector>
#include<algorithm>

int main() {
	std::vector<int> array = { 1,3,2,4,5 };
	std::sort(array.begin(), array.end(), [](int a, int b) { //这句代码实现了从小到大排序，并且把1排到最后
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