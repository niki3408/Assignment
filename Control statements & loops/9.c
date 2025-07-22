#include <stdio.h>

int main() {
    int length, breadth, area, perimeter;
    printf("Enter length and breadth: ");
    scanf("%d %d", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    if (area > perimeter)
        printf("Area is greater than perimeter\n");
    else
        printf("Perimeter is greater than or equal to area\n");

    return 0;
}
