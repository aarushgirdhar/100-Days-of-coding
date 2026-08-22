// Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>

int main()
{
	float a, b, c;

	printf("Enter three numbers: ");
	scanf("%f %f %f", &a, &b, &c);

	if (a >= b && a >= c)
		printf("Largest = %.2f\n", a);
	else if (b >= a && b >= c)
		printf("Largest = %.2f\n", b);
	else
		printf("Largest = %.2f\n", c);

	return 0;
}
