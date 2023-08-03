#include<iostream>

class Entity {
private:
	std::string name;
public:
 	Entity(const std::string& name) : name(name) {} //这句代码注意前面有const
	Entity() : name("気まぐれヴィーナス") {}
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
	delete e; //new之后不要忘记delete

	return 0;
}