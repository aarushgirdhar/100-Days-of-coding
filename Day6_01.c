 //Write a program to input an integer and check whether it is even or odd using if–else.
 #include <stdio.h>

int main(void)
{
	int number;

	printf("Enter an integer: ");
	scanf("%d", &number);

	if (number % 2 == 0)
		printf("The number is even.\n");
	else
		printf("The number is odd.\n");

	return 0;
}
