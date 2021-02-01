#include <stdio.h>
#include <string.h>

int counter[1000 + 1];

int main() {
    memset(counter, 0, sizeof(counter));

    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        if (i < 100) {
            counter[i] = counter[i - 1] + 1;
        } else {
            char numberStr[5];
            sprintf(numberStr, "%d", i);
            int numberStrLen = strlen(numberStr);

            int isOk = 1;
            int diff = numberStr[1] - numberStr[0];
            for (int j = 1; j < numberStrLen; ++j) {
                if (diff != numberStr[j] - numberStr[j - 1]) {
                    isOk = 0;
                    break;
                }
            }

            counter[i] = isOk ? counter[i - 1] + 1 : counter[i - 1];
        }
    }

    printf("%d\n", counter[n]);
}