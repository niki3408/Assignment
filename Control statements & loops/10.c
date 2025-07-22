#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;
    printf("Enter coordinates of 3 points (x1 y1 x2 y2 x3 y3): ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    int slope1 = (y2 - y1) * (x3 - x1);
    int slope2 = (y3 - y1) * (x2 - x1);

    if (slope1 == slope2)
        printf("Points are on the same line\n");
    else
        printf("Points are NOT on the same line\n");

    return 0;
}
