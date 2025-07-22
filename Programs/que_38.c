#include <stdio.h>
int main() {
    float amount, discount = 0;
    char member;
    printf("Enter total purchase amount: ");
    scanf("%f", &amount);
    printf("Enter membership type (P/R): ");
    scanf(" %c", &member);

    if(member == 'P') {
        if(amount >= 1000)
            discount = 0.15;
        else
            discount = 0.10;
    } else if(member == 'R') {
        if(amount >= 1000)
            discount = 0.05;
    }

    float finalAmount = amount - (amount * discount);
    printf("Payable amount: %.2f", finalAmount);
}

