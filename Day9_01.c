// Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>

int main()
{
    double a, b, c, discriminant;

    printf("Enter the coefficients a, b and c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    if (a == 0) {
        if (b == 0) {
            printf(c == 0 ? "Infinitely many solutions.\n"
                          : "No solution.\n");
        } else {
            printf("This is a linear equation. Root = %.2f\n", -c / b);
        }
        return 0;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and distinct.\n");
        printf("Root 1 = %.2f\nRoot 2 = %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        printf("The roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2f\n", root);
    } else {
        double real = -b / (2 * a);
        double imaginary = sqrt(-discriminant) / fabs(2 * a);
        printf("The roots are complex and conjugate.\n");
        printf("Root 1 = %.2f + %.2fi\n", real, imaginary);
        printf("Root 2 = %.2f - %.2fi\n", real, imaginary);
    }

    return 0;
}