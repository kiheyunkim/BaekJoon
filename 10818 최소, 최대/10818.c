#include <stdio.h>
int dataArray[1000000 + 1];
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &dataArray[i]);
	}

	int max = -987654321, min = 987654321;
	for (int i = 0; i < n; ++i) {
		if (dataArray[i] > max) {
			max = dataArray[i];
		}
		if (dataArray[i] < min) {
			min = dataArray[i];
		}
	}

	printf("%d %d\n", min, max);

	return 0;
}