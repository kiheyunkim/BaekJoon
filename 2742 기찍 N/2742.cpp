#include <iostream>
int main() {
	std::cout.tie(nullptr);
	std::cin.tie(nullptr);
	std::ios::sync_with_stdio(false);

	int n;
	std::cin >> n;
	for (int i = n; i > 0; --i) {
		std::cout << i << '\n';
	}

	return 0;
}