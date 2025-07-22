#include <stdio.h>

int main() {
    float cp, sp, profit;
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);

    if (sp > cp) {
        profit = sp - cp;
        printf("Profit = %.2f\n", profit);
    } else if (cp > sp) {
        profit = cp - sp;
        printf("Loss = %.2f\n", profit);
    } else {
        printf("No profit, no loss.\n");
    }
    return 0;
}
