#include <stdio.h>
int factorial(int n) {
    int f = 1;
    for(int i = 1; i <= n; i++)
        f *= i;
    return f;
}
int main() {
    int i, temp, sum, digit;
    printf("Strong numbers between 1 and 1000:\n");
    for(i = 1; i <= 1000; i++) {
        temp = i;
        sum = 0;
        while(temp > 0) {
            digit = temp % 10;
            sum += factorial(digit);
            temp /= 10;
        }
        if(sum == i)
            printf("%d\n", i);
    }
    return 0;
}
