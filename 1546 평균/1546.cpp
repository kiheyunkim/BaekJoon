#include <iostream>
int main() {
	int n;
	std::cin >> n;

	long double dataArray[1000 + 1];
	long double max = -987654321;
	for (int i = 0; i < n; ++i) {
		std::cin >> dataArray[i];
		if (max < dataArray[i]) {
			max = dataArray[i];
		}
	}

	for (int i = 0; i < n; ++i) {
		dataArray[i] = (dataArray[i] / max) * 100;
	}

	long double answer = 0;
	for (int i = 0; i < n; ++i) {
		answer += dataArray[i];
	}

	std::cout << answer / n << "\n";

	return 0;
}