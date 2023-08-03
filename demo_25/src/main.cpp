#include<iostream>
#include<thread>

bool isFinished = false;

void work() {
	while (!isFinished) {
		std::cout << "Working..." << std::endl;
	}
}

int main() {
	std::thread worker(work);

	std::cin.get();
	isFinished = true;

	worker.join(); //����wait�����

	std::cin.get();

	return 0;
}