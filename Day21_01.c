// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>

int main() 
{
    int n, firstDigit, lastDigit, divisor, swapped;
    int sign = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Swapped number: 0\n");
        return 0;
    }

    if (n < 0) {
        sign = -1;
        n = -n;
    }

    divisor = 1;
    while (n / divisor >= 10) {
        divisor *= 10;
    }

    firstDigit = n / divisor;
    lastDigit = n % 10;

    swapped = n - firstDigit * divisor - lastDigit + lastDigit * divisor + firstDigit;

    printf("Swapped number: %d\n", sign * swapped);

    return 0;
}
