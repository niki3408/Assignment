#include <stdio.h>
int main() {
    int length, width, perimeter;
    printf("Enter length and width: ");
    scanf("%d%d", &length, &width);
    
    perimeter = 2 * (length + width);
    printf("Perimeter: %d", perimeter);
    
