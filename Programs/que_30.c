#include <stdio.h>
int main() {
    int m, n;
    printf("Enter value of m: ");
    scanf("%d", &m);
    n = (m > 0) - (m < 0);
    printf("Value of n = %d", n);
    
}
