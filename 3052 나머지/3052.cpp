#include <iostream>
int main() {
	int dataArray[10];
	int answerArray[42]{ 0, };
	for (int i = 0; i < 10; ++i) {
		std::cin >> dataArray[i];
	}

	for (int i = 0; i < 10; ++i) {
		++answerArray[(dataArray[i] % 42)];
	}

	int answer = 0;
	for (int i = 0; i < 42; ++i) {
		if (answerArray[i] > 0) {
			++answer;
		}
	}

	std::cout << answer << "\n";

	return 0;
}