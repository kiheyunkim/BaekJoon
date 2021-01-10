#include <iostream>
int main() {
	int score;
	std::cin >> score;

	if (90 <= score && score <= 100) {
		std::cout << "A\n";
	}
	else if (80 <= score && score <= 89) {
		std::cout << "B\n";
	}
	else if (70 <= score && score <= 79) {
		std::cout << "C\n";
	}
	else if (60 <= score && score <= 69) {
		std::cout << "D\n";
	}
	else {
		std::cout << "F\n";
	}

	return 0;
}