#include <stdio.h>
int main() {
    int a, b, c, avg;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    avg = (a + b + c) / 3;
    printf("Average = %d", avg);
    
}
