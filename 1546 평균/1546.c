#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);

	long double dataArray[1000 + 1];
	long double max = -987654321;
	for (int i = 0; i < n; ++i) {
		scanf("%Lf", &dataArray[i]);
		if (max < dataArray[i]) {
			max = dataArray[i];
		}
	}

	for (int i = 0; i < n; ++i) {
		dataArray[i] = (dataArray[i] / max) * 100;
	}

	long double answer = 0;
	for (int i = 0; i < n; ++i) {
		answer += dataArray[i];
	}

	printf("%Lf", answer/ n);

	return 0;
}