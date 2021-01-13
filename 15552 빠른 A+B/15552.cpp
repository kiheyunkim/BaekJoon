#include <iostream>
int main() {
	std::ios::sync_with_stdio(false);
	std::cout.tie(nullptr);
	std::cin.tie(nullptr);

	int testCount;
	std::cin >> testCount;
	for (register int i = 0; i < testCount; ++i) {
		int a, b;
		std::cin >> a >> b;
		std::cout << a + b << '\n';
	}

	return 0;
}