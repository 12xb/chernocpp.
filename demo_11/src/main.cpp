#include<iostream>
#include<string>

class Printable {
public:
	virtual void print() = 0; //virtual不要忘记。
};

class Entity : public Printable {
public:
	//virtual std::string getName() = 0;
	void print() override {
		std::cout << "Entity" << std::endl;
	}
};

class Player : public Entity,Printable { //注意不要忘记public
//private:
	//std::string m_name;
public:
	//Player(const std::string& name) : m_name(name) {}
	//std::string getName() override {
	//	return m_name;
	//}
	void print() override {
		std::cout << "Player" << std::endl;
	}
};

/*
void printName(Entity* e) {
	std::cout << e->getName() << std::endl;
}
*/

int main() {
	Entity* e1 = new Player();
	//printName(e1);
	Player* p = new Player();
	//printName(p);

	e1->print();
	p->print();

	Entity* e2 = new Entity();
	e2->print();

	std::cin.get();

	return 0;
}