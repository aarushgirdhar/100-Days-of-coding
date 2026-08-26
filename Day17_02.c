// Q34: Check whether a number is prime.
#include <stdio.h>

int main()
{
	int number, divisor, is_prime = 1;

	printf("Enter a number: ");
	scanf("%d", &number);

	if (number < 2) {
		is_prime = 0;
	} else {
		for (divisor = 2; divisor <= number / divisor; divisor++) {
			if (number % divisor == 0) {
				is_prime = 0;
				break;
			}
		}
	}

	if (is_prime)
		printf("%d is prime.\n", number);
	else
		printf("%d is not prime.\n", number);

	return 0;
}
