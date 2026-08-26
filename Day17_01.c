// Check whether a number is an Armstrong number.
#include <stdio.h>

int main()
{
	long long number, original, temp, sum = 0;
	int digits = 0;

	printf("Enter a non-negative integer: ");
	scanf("%lld", &number);

	if (number < 0) {
		printf("Please enter a non-negative integer.\n");
		return 1;
	}

	original = number;
	temp = number;

	if (temp == 0) {
		digits = 1;
	} else {
		while (temp != 0) {
			digits++;
			temp /= 10;
		}
	}

	temp = number;
	do {
		long long digit = temp % 10;
		long long power = 1;
		int i;

		for (i = 0; i < digits; i++) {
			power *= digit;
		}
		sum += power;
		temp /= 10;
	} while (temp != 0);

	if (sum == original) {
		printf("%lld is an Armstrong number.\n", original);
	} else {
		printf("%lld is not an Armstrong number.\n", original);
	}

	return 0;
}
