#include <iostream>
int main() {
	int n;
	std::cin >> n;
	int origin = n, answer = 0;

	while (true) {
		n = ((n % 10) * 10) + (((n / 10) + (n % 10)) % 10);
		++answer;
		if (origin == n) {
			break;
		}
	}

	std::cout << answer << "\n";

	return 0;
}