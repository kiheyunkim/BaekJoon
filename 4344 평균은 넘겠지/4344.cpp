#include <iostream>
int scores[1000 + 1];
int main() {
	int testCount;
	std::cin >> testCount;

	for (int i = 0; i < testCount; ++i) {
		float n;
		std::cin >> n;

		float sum = 0;
		for (int j = 0; j < n; ++j) {
			std::cin >> scores[j];
			sum += scores[j];
		}

		float count = 0;
		float avg = sum / n;
		for (int j = 0; j < n; ++j) {
			if (avg < scores[j]) {
				++count;
			}
		}

		std::cout.setf(std::ios::fixed);
		std::cout.precision(3);
		std::cout << count / n * 100 << "%\n";
	}

	return 0;
}