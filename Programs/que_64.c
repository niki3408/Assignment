#include <stdio.h>
int factorial(int n) {
    int f = 1;
    for(int i = 1; i <= n; i++)
        f *= i;
    return f;
}
int main() {
    int n, temp, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(temp > 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    if(sum == n)
        printf("%d is a Strong number\n", n);
    else
        printf("%d is not a Strong number\n", n);
    return 0;
}
