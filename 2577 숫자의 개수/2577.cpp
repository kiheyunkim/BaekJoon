#include <string>
#include <iostream>
int main() {
	int a, b, c;
	std::cin >> a >> b >> c;

	std::string input = std::to_string(a * b * c);
	int inputLen = input.length();
	int answer[10]{ 0, };
	for (int i = 0; i < inputLen; ++i) {
		++answer[input[i] - '0'];
	}

	for (int i = 0; i < 10; ++i) {
		std::cout << answer[i] << "\n";
	}

	return 0;
}