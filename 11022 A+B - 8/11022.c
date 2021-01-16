#include <stdio.h>
int main() {
	int testCount;
	scanf("%d", &testCount);
	for (int i = 0; i < testCount; ++i) {
		int a, b;
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i + 1, a, b, a + b);
	}

	return 0;
}