#include <stdio.h>
int main() {
	int hour, minute;
	scanf("%d %d", &hour, &minute);

	if (minute - 45 < 0) {
		hour -= 1;
		minute += 60;
	}
	minute -= 45;

	if (hour < 0) {
		hour = 23;
	}

	printf("%d %d", hour, minute);
	return 0;
}