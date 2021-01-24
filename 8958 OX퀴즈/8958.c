#include <stdio.h>
#include <string.h>
int main() {
	int testCount;
	scanf("%d", &testCount);
	for (int i = 0; i < testCount; ++i) {
		char inputs[80 + 1];
		scanf("%s", inputs);
		int inputLen = strlen(inputs);
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

		printf("%d\n", answer);
	}

	return 0;
}