#include <stdio.h>
int main() {
	int testCount;
	scanf("%d", &testCount);
	for (register int i = 0; i < testCount; ++i) {
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}

	return 0;
}