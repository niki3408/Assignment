#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    int max = (a > b) * (a > c) * a +
              (b > a) * (b > c) * b +
              (c > a) * (c > b) * c +
              (a == b && a > c) * a +
              (a == c && a > b) * a +
              (b == c && b > a) * b +
              (a == b && b == c) * a;

    printf("Greatest number is: %d", max);
    return 0;
}
