#include <iostream>
#include <string>
#include <cstring>

int checker[20000 + 1];

void function(int current) {
    int sum = current;

    std::string strNumber = std::to_string(current);
    int strNumberLen = strNumber.length();
    for (int i = 0; i < strNumberLen; ++i) {
        sum += (strNumber[i] - '0');
    }

    checker[sum] = 1;
}

int main() {
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    memset(checker, 0, sizeof(checker));

    for (int i = 1; i < 10000; ++i) {
        function(i);
    }

    for (int i = 1; i <= 10000; ++i) {
        if (checker[i] == 0) {
            std::cout << i << "\n";
        }
    }

    return 0;
}
