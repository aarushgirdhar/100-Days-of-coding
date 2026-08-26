//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main()
{
    unsigned int number;
    unsigned int divisor = 1;

    printf("Enter a number: ");
    scanf("%u", &number);

    if (number == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    while (divisor <= number / 2)
        divisor *= 2;

    printf("Binary representation: ");
    while (divisor > 0) {
        printf("%u", number / divisor);
        number %= divisor;
        divisor /= 2;
    }
    printf("\n");

    return 0;
}