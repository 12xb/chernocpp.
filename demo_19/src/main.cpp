#include<iostream>
#include<vector>

struct Entity {
	int x, y, z;

	Entity(int x,int y,int z) : x(x),y(y),z(z) {}
	Entity(const Entity& e) : x(e.x),y(e.y),z(e.z) {
		std::cout << "Copied" << std::endl;
	}
};

int main() {
	std::vector<Entity> entities;
	entities.reserve(3);

	//entities.push_back(Entity(1, 2, 3));
	//entities.push_back(Entity(4, 5, 6));
	//entities.push_back(Entity(7, 8, 9));

	entities.emplace_back(1,2,3);
	entities.emplace_back(4, 5, 6);
	entities.emplace_back(7, 8, 9);

	std::cin.get();

	return 0;
}