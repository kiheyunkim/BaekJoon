#include <iostream>
int main() {
	int x, y;
	std::cin >> x >> y;

	if (x * y > 0) {
		if (x > 0) {
			std::cout << "1\n";
		}
		else {
			std::cout << "3\n";
		}
	}
	else {
		if (x > 0) {
			std::cout << "4\n";
		}
		else {
			std::cout << "2\n";
		}
	}

	return 0;
}