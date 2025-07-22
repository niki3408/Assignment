#include <stdio.h>
int main() {
    int units;
    float bill;
    printf("Enter electricity units consumed: ");
    scanf("%d", &units);

    if(units <= 50)
        bill = units * 0.5;
    else if(units <= 150)
        bill = 50 * 0.5 + (units - 50) * 0.75;
    else if(units <= 250)
        bill = 50 * 0.5 + 100 * 0.75 + (units - 150) * 1.20;
    else
        bill = 50 * 0.5 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;

    bill += bill * 0.20;  // surcharge 20%
    printf("Total bill = Rs. %.2f", bill);
    return 0;
}
