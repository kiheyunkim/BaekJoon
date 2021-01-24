#include <stdio.h>
int scores[1000 + 1];
int main() {
	int testCount;
	scanf("%d", &testCount);

	for (int i = 0; i < testCount; ++i) {
		float n;
		scanf("%f", &n);

		float sum = 0;
		for (int j = 0; j < n; ++j) {
			scanf("%d", &scores[j]);
			sum += scores[j];
		}

		float count = 0;
		float avg = sum / n;
		for (int j = 0; j < n; ++j) {
			if (avg < scores[j]) {
				++count;
			}
		}

		printf("%.3f%%\n", count / n * 100);
	}

	return 0;
}