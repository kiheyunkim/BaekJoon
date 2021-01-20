#include <iostream>
int dataArray[1000000 + 1];
int main() {
	int n;
	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		std::cin >> dataArray[i];
	}

	int max = -987654321, min = 987654321;
	for (int i = 0; i < n; ++i) {
		if (dataArray[i] > max) {
			max = dataArray[i];
		}
		if (dataArray[i] < min) {
			min = dataArray[i];
		}
	}

	std::cout << min << " " << max << "\n";

	return 0;
}