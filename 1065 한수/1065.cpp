#include <iostream>
#include <string>
#include <cstring>

int counter[1000 + 1];

int main() {
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    memset(counter, 0, sizeof(counter));

    int n;
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        if (i < 100) {
            counter[i] = counter[i - 1] + 1;
        } else {
            std::string numberStr = std::to_string(i);
            int numberStrLen = numberStr.length();

            bool isOk = true;
            int diff = numberStr[1] - numberStr[0];
            for (int j = 1; j < numberStrLen; ++j) {
                if (diff != numberStr[j] - numberStr[j - 1]) {
                    isOk = false;
                    break;
                }
            }

            counter[i] = isOk ? counter[i - 1] + 1 : counter[i - 1];
        }
    }

    std::cout << counter[n] << "\n";
}