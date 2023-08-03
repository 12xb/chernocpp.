#include<iostream>
#include<string>

int main() {
	//const char* name = "Junko"; 不能直接修改name的内容 C++11之后前面必须加上const
	//std::cout << name << std::endl;
	//char name2[6] = { 'J','u','n','k','o','\0'};
	//std::cout << name2 << std::endl;

	std::string name = "Junko";
	std::cout << name << std::endl;
	name += " hello";
	std::cout << name << std::endl;
	std::cout << name.size() << std::endl;

	std::cout << name.find("ko") << std::endl;
	if (name.find("ko") == std::string::npos) //如果没找到的话
		std::cout << "Not Found" << std::endl;

	std::cin.get();

	return 0;
}