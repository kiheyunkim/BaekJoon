#include <iostream>
#include <string>
int main() {
	int testCount;
	std::cin >> testCount;

	for (int i = 0; i < testCount; ++i) {
		std::string inputs;
		std::cin >> inputs;
		int inputLen = inputs.length();

		int accum = 0;
		int answer = 0;

		for (int i = 0; i < inputLen; ++i) {
			if (inputs[i] == 'O') {
				++accum;
				answer += accum;
			}
			else if (inputs[i] == 'X') {
				accum = 0;
			}
		}

		std::cout << answer << "\n";
	}

	return 0;
}