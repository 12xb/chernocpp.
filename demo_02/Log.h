#pragma once
#include<iostream>

/*
	�������ʹ��inline����ʵҲ����ʹ��static��
	inline����˼�ǣ���std::cout << message << std::endl; ������ֱ���滻 Log���������ݡ�
*/
inline void Log(const char* message) {
	std::cout << message << std::endl;
}