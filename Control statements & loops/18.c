#include <stdio.h>

void printInWords(int num) {
    int rev = 0, digit;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }

    while (rev > 0) {
        digit = rev % 10;
        switch (digit) {
            case 0: printf("zero "); break;
            case 1: printf("one "); break;
            case 2: printf("two "); break;
            case 3: printf("three "); break;
            case 4: printf("four "); break;
            case 5: printf("five "); break;
            case 6: printf("six "); break;
            case 7: printf("seven "); break;
            case 8: printf("eight "); break;
            case 9: printf("nine "); break;
        }
        rev /= 10;
    }
}

int isFibonacci(int n) {
    int a = 0, b = 1, temp;
    while (b < n) {
        temp = b;
        b = a + b;
        a = temp;
    }
    return (b == n || n == 0);
}

int main() {
    int num;
    printf("Enter a number up to 6 digits: ");
    scanf("%d", &num);

    printf("In words: ");
    printInWords(num);
    printf("\n");

    if (isFibonacci(num))
        printf("It is a Fibonacci number.\n");
    else
        printf("It is NOT a Fibonacci number.\n");

    return 0;
}
