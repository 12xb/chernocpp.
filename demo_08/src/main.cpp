#include<iostream>

class Singleton {
public:
	static Singleton& get() {
		Singleton singleton;
		return singleton;
	}

	void hello() {}
};

int main() {
	Singleton::get().hello();

	std::cin.get();

	return 0;
}