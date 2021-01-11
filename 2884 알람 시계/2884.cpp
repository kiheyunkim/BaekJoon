#include <iostream>
int main() {
	int hour, minute;
	std::cin >> hour >> minute;

	if (minute - 45 < 0) {
		hour -= 1;
		minute += 60;
	}
	minute -= 45;

	if (hour < 0) {
		hour = 23;
	}

	std::cout << hour << " " << minute << "\n";

	return 0;
}