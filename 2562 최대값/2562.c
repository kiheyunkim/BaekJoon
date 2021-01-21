#include <stdio.h>
int main() {
	int numbers[9];
	for (int i = 0; i < 9; ++i) {
		scanf("%d", &numbers[i]);
	}

	int order = 0, max = numbers[0];
	for (int i = 1; i < 9; ++i) {
		if (numbers[i] > max) {
			max = numbers[i];
			order = i;
		}
	}

	printf("%d\n%d\n", max, order + 1);
}