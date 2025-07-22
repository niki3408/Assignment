#include <stdio.h>
int main() {
    int side;
    printf("Enter side length: ");
    scanf("%d", &side);
    int area = 6 * side * side;
    printf("Surface Area = %d", area);
    return 0;
}
