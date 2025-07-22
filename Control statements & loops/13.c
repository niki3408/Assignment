#include <stdio.h>

int main() {
    int num, digit, count = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter digit to find: ");
    scanf("%d", &digit);

    temp = num;
    while (temp > 0) {
        if (temp % 10 == digit)
            count++;
        temp /= 10;
    }

    if (count > 0)
        printf("Digit %d occurs %d times in %d\n", digit, count, num);
    else
        printf("Digit not found.\n");

    return 0;
}
