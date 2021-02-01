#include <stdio.h>
#include <string.h>

int checker[20000 + 1];

void function(int current) {
    int sum = current;


    char numberStr[100 + 1] = {0,};
    sprintf(numberStr, "%d", current);
    int numberLen = strlen(numberStr);

    for (int i = 0; i < numberLen; ++i) {
        sum += (numberStr[i] - '0');
    }

    checker[sum] = 1;
}

int main() {
    memset(checker, 0, sizeof(checker));

    for (int i = 1; i < 10000; ++i) {
        function(i);
    }

    for (int i = 1; i <= 10000; ++i) {
        if (checker[i] == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
