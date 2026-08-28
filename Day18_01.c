// Write a program to print all factors of a given number.
#include <stdio.h>

int main()
{
	int number;

	printf("Enter a positive number: ");
	scanf("%d", &number);

	printf("Factors of %d are: ", number);
	for (int i = 1; i <= number; i++)
	{
		if (number % i == 0)
		{
			printf("%d ", i);
		}
	}

	return 0;
}
