//potential energy is : mgh

#include <stdio.h>
int main() {
    float mass, height, pe, g = 9.8;
    printf("Enter mass and height: ");
    scanf("%f%f", &mass, &height);
    pe = mass * g * height;
    printf("Potential Energy = %.2f", pe);
    return 0;
}
