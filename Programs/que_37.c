#include <stdio.h>
#define PI 3.14159
int main() {
    int choice;
    float r, l, w, area;
    printf("1. Area of Circle\n2. Area of Rectangle\n3. Exit\nEnter choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &radius);
            area = PI * radius * radius;
            printf("Area = %.2f", area);
            break;
        case 2:
            printf("Enter length and width: ");
            scanf("%f%f", &length, &width);
            area = length * width;
            printf("Area = %.2f", area);
            break;
        case 3:
            printf("Exiting...");
            break;
        default:
            printf("Invalid choice.");
    }
    return 0;
}
