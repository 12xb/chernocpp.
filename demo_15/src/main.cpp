#include<iostream>

class Entity {
private:
	std::string name;
public:
 	Entity(const std::string& name) : name(name) {} //������ע��ǰ����const
	Entity() : name("�ݤޤ�������`�ʥ�") {}
	std::string& getName() {
		return name;
	}
};

int main() {
	Entity* e;

	{
		Entity* e1 = new Entity("Sakurada Junko");
		e = e1;
	}

	std::cout << e->getName() << std::endl;

	std::cin.get();
	delete e; //new֮��Ҫ����delete

	return 0;
}