#include <stdio.h>
#define PI 3.14
int main() {
    float radius, height, volume;
    printf("Enter radius and height: ");
    scanf("%f%f", &radius, &height);
    volume = PI * radius * radius * height;
    printf("Volume = %.2f", volume);
    return 0;
}
