#include <stdio.h>

int main() {
    int base, exp, result = 1;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    for (int i = 0; i < exp; i++)
        result *= base;

    printf("Result = %d\n", result);
    return 0;
}

