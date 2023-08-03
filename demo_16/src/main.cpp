#include<iostream>

struct Entity {
	int x, y;

	Entity(int x,int y) : x(x),y(y) {}

	Entity operator+(const Entity& other) const {
		return Entity(x + other.x, y + other.y);
	}
	
	Entity operator*(const Entity& other) const {
		return Entity(x * other.x, y * other.y);
	}

	bool operator==(const Entity& other) const {
		return x == other.x && y == other.y;
	}

	bool operator!=(const Entity& other) const {
		return !operator==(other);
	}
};

int main() {
	Entity e1(1, 2);
	Entity e2(3, 4);
	Entity e3 = e1 + e2;
	std::cout << e3.x << " " << e3.y << std::endl;
	Entity e4 = e1 * e2;
	std::cout << e4.x << " " << e4.y << std::endl;
	Entity e5(4, 6);
	std::cout << (e5 == e3) << std::endl;
	std::cout << (e5 != e3) << std::endl;

	std::cin.get();

	return 0;
}