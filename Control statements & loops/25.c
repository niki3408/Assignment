#include <stdio.h>

int main() {
    for (int i = 2; i <= 300; i++) {
        int isPrime = 1;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (!isPrime)
            continue;
        printf("%d ", i);
    }
    return 0;
}
