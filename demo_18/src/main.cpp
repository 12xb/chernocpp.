#include<iostream>
#include<vector>

struct Entity {
	int x, y, z;
};

std::ostream& operator<<(std::ostream& stream,const Entity& entity) { //stream 前面的引用不要忘记
	stream << entity.x << " " << entity.y << " " << entity.z;
	return stream;
}

int main() {
	std::vector<Entity> list;
	list.push_back({ 1,2,3 });
	list.push_back({ 4,5,6 });
	list.push_back({ 7,8,9 });

	for (int i = 0; i < list.size(); i++) {
		std::cout << list[i] << std::endl;
	}

	list.erase(list.begin() + 1);

	for (int i = 0; i < list.size(); i++)
		std::cout << list[i] << std::endl;

	std::cin.get();

	return 0;
}