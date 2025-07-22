#include <stdio.h>
int main() {
    int length, width;
    printf("Enter length and width: ");
    scanf("%d%d", &length, &width);
    int area = length * width;
    printf("Area = %d", area);
    
}
