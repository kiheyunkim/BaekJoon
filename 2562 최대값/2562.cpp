#include <iostream>
int main() {
	int numbers[9];
	for (int i = 0; i < 9; ++i) {
		std::cin >> numbers[i];
	}

	int order = 0;
	int max = numbers[0];
	for (int i = 1; i < 9; ++i) {
		if (max < numbers[i]) {
			max = numbers[i];
			order = i;
		}
	}

	std::cout << max << "\n" << order + 1 << "\n";
}