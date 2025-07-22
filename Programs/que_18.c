#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c;
    printf("Enter sides a and b: ");
    scanf("%d%d", &a, &b);
    c = sqrt(a * a + b * b);
    printf("Hypotenuse = %d", c);

}
