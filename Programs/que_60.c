#include <stdio.h>
int main() {
    int n, max = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n != 0) {
        digit = n % 10;
        if(digit > max)
            max = digit;
        n /= 10;
    }
    printf("Largest digit = %d", max);
    return 0;
}
