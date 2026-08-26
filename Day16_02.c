// Write a program to check if a number is a palindrome.
#include <stdio.h>

int main()
{
    int number, original, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while (number != 0) {
        digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}