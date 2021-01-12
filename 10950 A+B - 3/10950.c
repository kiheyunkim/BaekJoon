#include <stdio.h>
int main() {
	int testcount;
	scanf("%d", &testcount);
	for (int i = 0; i < testcount; ++i) {
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}

	return 0;
}