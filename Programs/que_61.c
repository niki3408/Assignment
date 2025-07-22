#include <stdio.h>
int main() {
    int n, digit, min = 9;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n > 0) {
        digit = n % 10;
        if(digit < min)
            min = digit;
        n /= 10;
    }
    printf("Smallest digit: %d\n", min);
    return 0;
}
