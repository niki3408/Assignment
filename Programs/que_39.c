#include <stdio.h>
int main() {
    int age;
    float income;
    printf("Enter age and monthly income: ");
    scanf("%d%f", &age, &income);
    if(age >= 21 && income >= 15000)
        printf("Eligible for loan.");
    else
        printf("Not eligible.");
    
}
