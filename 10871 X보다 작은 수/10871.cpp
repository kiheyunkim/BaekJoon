#include<iostream>
int inputs[10000 + 1];
int main() {
	int n, x;
	std::cin >> n >> x;

	for (int i = 0; i < n; ++i) {
		std::cin >> inputs[i];
	}

	for (int i = 0; i < n; ++i) {
		if (inputs[i] < x) {
			std::cout << inputs[i] << " ";
		}
	}
	std::cout << "\n";

	return 0;
}