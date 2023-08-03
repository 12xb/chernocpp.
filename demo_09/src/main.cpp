#include<iostream>

class Log {
public:
	enum Level {
		ERROR = 1, WARNING = 2, INFO = 3
	};
	void error(const char* message) {
		if (level >= ERROR)
			std::cout << "[ERROR] : " << message << std::endl;
	}
	void warning(const char* message) {
		if (level >= WARNING)
			std::cout << "[WARNING] : " << message << std::endl;
	}
	void info(const char* message) {
		if (level >= INFO)
			std::cout << "[INFO] : " << message << std::endl;
	}
	void setLevel(int l) {
		level = l;
	}

private:
	int level = INFO;
};

int main() {
	Log log;
	log.setLevel(Log::ERROR);
	log.info("Hello");
	log.error("Hello");
	log.warning("Hello");

	std::cin.get();

	return 0;
}