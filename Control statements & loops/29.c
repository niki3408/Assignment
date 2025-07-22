#include <stdio.h>

int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    for (int i = 0; i < 5; i++) {
        for (int k = 0; k < 5 - i; k++)
            printf(" ");
        for (int j = 0; j <= i; j++)
            printf("%d ", fact(i) / (fact(j) * fact(i - j)));
        printf("\n");
    }
    return 0;
}
