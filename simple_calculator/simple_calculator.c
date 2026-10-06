#include <stdio.h>

int main() {
    double num1, num2;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &num1);

    printf("Enter another number: ");
    scanf("%lf", &num2);

    printf("Enter an operation to perform (e.g., +, -, *, /, %): ");
    scanf(" %c", &op);

    switch (op) {
        case '+': printf("Result: %.2lf\n", num1 + num2); break;
        case '-': printf("Result: %.2lf\n", num1 - num2); break;
        case '*': printf("Result: %.2lf\n", num1 * num2); break;
        case '%':
            if ((int)num2 != 0) {
                printf("Result: %d\n", (int)num1 % (int)num2);
            } else {
                printf("Error: Cannot divide by zero.\n");
            }
            break;
        case '/':
            if (num2 != 0) {
                printf("Result: %.2lf\n", num1 / num2);
            } else {
                printf("Error: Cannot divide by zero.\n");
            }
            break;
        default: printf("Error: Invalid operator.\n");
    }

    return 0;
}
