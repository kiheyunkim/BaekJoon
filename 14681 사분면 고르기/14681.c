#include<stdio.h>
int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	if (x * y > 0) {
		if (x > 0) {
			printf("1\n");
		}
		else {
			printf("3\n");
		}
	}
	else {
		if (x > 0) {
			printf("4\n");
		}
		else {
			printf("2\n");
		}
	}

	return 0;
}