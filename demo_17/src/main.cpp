#include<iostream>

class String {
private:
	char* m_Buffer;
	unsigned int m_size;
public:
	String(const char* string) {
		m_size = strlen(string);
		m_Buffer = new char[m_size + 1];
		memcpy(m_Buffer, string, m_size);
		m_Buffer[m_size] = 0;
	}

	String(const String& other) : m_size(other.m_size) {
		m_Buffer = new char[m_size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_size + 1);
	}

	~String() {
		delete[] m_Buffer;
	}

	char& operator[](const unsigned index) const //[]²Ù×÷·ûÖØÔØ
	{
		return m_Buffer[index];
	}
	friend std::ostream& operator<<(std::ostream& stream, const String& string);
};

std::ostream& operator<<(std::ostream& stream, const String& string) {
	stream << string.m_Buffer;
	return stream;
}

int main() {
	String str1("Sakurada Junko");
	String str2 = str1; 

	std::cout << str1 << std::endl;
	str2[6] = 'b';
	std::cout << str2 << std::endl;

	std::cin.get(); 

	return 0;
}