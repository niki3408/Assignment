#include <stdio.h>

int main() {
    int num, reverse = 0, original, digit;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    printf("Reversed number = %d\n", reverse);

    if (reverse == original)
        printf("Both are equal\n");
    else
        printf("Not equal\n");

    return 0;
}
