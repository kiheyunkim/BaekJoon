#include <iostream>
int main() {
	long double a, b;
	std::cin >> a >> b;
	std::cout.precision(10);

	std::cout << a / b << "\n";

	return 0;
}