#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int origin = n, answer = 0;

	while (1) {
		n = ((n % 10) * 10) + (((n / 10) + (n % 10)) % 10);
		++answer;
		if (origin == n) {
			break;
		}
	}

	printf("%d\n", answer);

	return 0;
}