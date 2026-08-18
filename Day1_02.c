#include <stdio.h>

int main() {
    float a, b, sum, difference, product, quotient;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = a / b;

    printf("\nSum = %.2f\n", sum);
    printf("Difference = %.2f\n", difference);
    printf("Product = %.2f\n", product);
    printf("Quotient = %.2f\n", quotient);

    return 0;
}
