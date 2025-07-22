#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    (a > b) ? printf("Sum = %d\n", a + b) : printf("Difference = %d\n", b - a);
    return 0;
}
