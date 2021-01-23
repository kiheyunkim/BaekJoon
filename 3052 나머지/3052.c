#include <stdio.h>
int main() {
	int dataArray[10];
	int answerArray[42] = { 0, };
	for (int i = 0; i < 10; ++i) {
		scanf("%d", &dataArray[i]);
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

	printf("%d\n", answer);
	return 0;
}