#include <stdio.h>
int main() {
    char op;
    int a, b;
    printf("Enter operator (+ - * /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    switch(op) {
        case '+': printf("Result = %d", a + b); 
        break;
        case '-': printf("Result = %d", a - b); 
        break;
        case '*': printf("Result = %d", a * b); 
        break;
        case '/': 
        if(b != 0) 
            printf("Result = %d", a / b); 
        else 
            printf("Divide by zero error"); 
        break;
        default: printf("Invalid operator");
    }
    return 0;
}
