#include <iostream>
int main() {
	int testCount;
	std::cin >> testCount;
	for (int i = 0; i < testCount; ++i) {
		int a, b;
		std::cin >> a >> b;
		std::cout << a + b << "\n";
	}

	return 0;
}