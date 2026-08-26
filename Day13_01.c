//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main()
{
    double first, second;
    char operator;

    printf("Enter an expression (number operator number): ");
    scanf("%lf %c %lf", &first, &operator, &second);

    switch (operator) {
        case '+':
            printf("Result = %.2f\n", first + second);
            break;
        case '-':
            printf("Result = %.2f\n", first - second);
            break;
        case '*':
            printf("Result = %.2f\n", first * second);
            break;
        case '/':
            if (second == 0) {
                printf("Error: division by zero is not allowed.\n");
            } else {
                printf("Result = %.2f\n", first / second);
            }
            break;
        case '%':
            if ((int)second == 0) {
                printf("Error: modulo by zero is not allowed.\n");
            } else {
                printf("Result = %d\n", (int)first % (int)second);
            }
            break;
        default:
            printf("Error: invalid operator.\n");
    }

    return 0;
}