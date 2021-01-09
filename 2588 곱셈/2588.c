#include <stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	int temp = b;
	while (temp){
		printf("%d\n", a * (temp % 10));
		temp /= 10;
	}
	printf("%d\n", a * b);
	
	return 0;
}