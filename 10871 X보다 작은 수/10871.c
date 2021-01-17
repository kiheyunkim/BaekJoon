#include <stdio.h>
int inputs[10000 + 1];
int main() {
	int n, x;
	scanf("%d %d", &n, &x);

	for (int i = 0; i < n; ++i) {
		scanf("%d", &inputs[i]);
	}

	for (int i = 0; i < n; ++i) {
		if (inputs[i] < x) {
			printf("%d ", inputs[i]);
		}
	}
	printf("\n");

	return 0;
}