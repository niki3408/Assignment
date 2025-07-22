//kinetic energy is : 1/2(mv^2)

#include <stdio.h>
int main() {
    float m, v, ke;
    printf("Enter mass and velocity: ");
    scanf("%f%f", &mass, &velocity);
    ke = 0.5 * m * v * v;
    printf("Kinetic Energy = %.2f", ke);
    return 0;
}
