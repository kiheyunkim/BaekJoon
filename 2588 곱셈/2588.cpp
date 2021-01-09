#include <iostream>
int main() {
	int a, b;
	std::cin >> a >> b;
	int temp = b;
	while (temp) {
		std::cout << a * (temp % 10) << "\n";
		temp /= 10;
	}
	std::cout << a * b << "\n";

	return 0;
}