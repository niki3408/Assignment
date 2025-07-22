#include <stdio.h>
int main() {
    int phy, chem, math, total;
    printf("Enter marks in Physics, Chemistry, Maths: ");
    scanf("%d%d%d", &phy, &chem, &math);
    total = phy + chem + math;
    if((phy >= 50 && chem >= 50 && math >= 65) && (total >= 180 || (phy + math) >= 140))
        printf("Eligible for admission.");
    else
        printf("Not eligible.");
    return 0;
}
