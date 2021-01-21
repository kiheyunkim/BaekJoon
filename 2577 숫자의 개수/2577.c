#include <stdio.h>
#include <string.h>
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	char input[11];
	sprintf(input, "%d", a * b * c);

	int inputLen = strlen(input);

	int answers[10] = { 0, };
	for (int i = 0; i < inputLen; ++i) {
		++answers[input[i] - '0'];
	}

	for (int i = 0; i < 10; ++i) {
		printf("%d\n", answers[i]);
	}
}