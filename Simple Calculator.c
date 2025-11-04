#include <stdio.h>
int main() {
    char op;
    float a, b;
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    switch(op) {
        case '+': printf("Result = %.2f", a + b); break;
        case '-': printf("Result = %.2f", a - b); break;
        case '*': printf("Result = %.2f", a * b); break;
        case '/':
            if (b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Error: Division by zero");
            break;
        default: printf("Invalid operator");
    }

    return 0;
}
