#include<iostream>
#include<string>

class Entity {
public:
	virtual std::string getName() {
		return "Entity";
	}
};

class Player : public Entity { //注意不要忘记public
private:
	std::string m_name;
public:
	Player(const std::string& name) : m_name(name) {}
	std::string getName() override {
		return m_name;
	}
};

void printName(Entity* e) {
	std::cout << e->getName() << std::endl;
}

int main() {
	Entity* e1 = new Entity();
	printName(e1);
	Player* p = new Player("Junko");
	printName(p);

	std::cin.get();

	return 0;
}