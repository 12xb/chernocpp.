#include<iostream>

template<typename T,int N>
class Array {
private:
	T array[N];
public:
	int length() {
		return N;
	}
};

int main() {
	Array<char, 5> a;
	std::cout << a.length() << std::endl;

	std::cin.get();

	return 0;
}