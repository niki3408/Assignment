#include <stdio.h>
int main() {
    int n, bit;
    printf("Enter N: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        bit = 1;
        for(int j = 1; j <= i; j++) {
            printf("%d", bit);
            bit = 1 - bit; // Toggle between 1 and 0
        }
        printf("\n");
    }
    return 0;
}
