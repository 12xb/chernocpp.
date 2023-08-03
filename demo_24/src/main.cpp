#include<iostream>

namespace Junko {
	void print(const char* content) {
		std::cout << content << std::endl;
	}
}

namespace Seiko {
	void print(const char* content) {
		std::string temp = content;
		std::reverse(temp.begin(),temp.end());
		std::cout << temp << std::endl;
	}
}

int main() {
	Junko::print("Hahan");
	Seiko::print("Hahan");

	std::cin.get();

	return 0;
}