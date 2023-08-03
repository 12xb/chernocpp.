#include<iostream>
#include<vector>

void print(int val) {
	std::cout << val << std::endl;
}

void printDetail(std::vector<int>& array, void(*function)(int)) {
	for (int i = 0; i < array.size(); i++) {
		function(array[i]);
	}
}

int main() {
	std::vector<int> vec = { 1,2,3,4,5 };
	printDetail(vec, print);

	std::cin.get();

	return 0;
}