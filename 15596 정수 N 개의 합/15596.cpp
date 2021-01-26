#include <vector>
long long sum(std::vector<int>& a) {
	long long ans = 0;
	int vecSize = a.size();
	for (int i = 0; i < vecSize; ++i) {
		ans += a[i];
	}

	return ans;
}
