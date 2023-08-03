#include<iostream>

#define LOG(x) std::cout << x << std::endl;

class Player {
public:
	int x, y;
	double speed;
	void move(int xa, int ya) {
		x += xa * speed;
		y += ya * speed;
	}
};

int main() {
	Player player;
	player.x = player.y = 0,player.speed = 1.5;
	player.move(100, -150);
	LOG(player.x);
	LOG(player.y);

	std::cin.get();

	return 0;
}