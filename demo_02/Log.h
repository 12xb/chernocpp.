#pragma once
#include<iostream>

/*
	这里除了使用inline，其实也可以使用static。
	inline的意思是，将std::cout << message << std::endl; 这句代码直接替换 Log函数的内容。
*/
inline void Log(const char* message) {
	std::cout << message << std::endl;
}