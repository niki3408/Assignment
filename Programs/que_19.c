#include <stdio.h>
int main() {
    float voltage, current, power;
    printf("Enter voltage and current: ");
    scanf("%f%f", &voltage, &current);
    power = voltage * current;
    printf("Power = %.2f Watts", power);
    return 0;
}
