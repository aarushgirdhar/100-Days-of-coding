// Calculate simple and compound interest.
#include <stdio.h>

int main()
{
	double principal, rate, time;
	double simple_interest, compound_interest;

	printf("Enter principal, rate (%%), and time (years): ");
	if (scanf("%lf %lf %lf", &principal, &rate, &time) != 3) {
		printf("Invalid input.\n");
		return 1;
	}

	simple_interest = (principal * rate * time) / 100.0;
	compound_interest = principal * (pow(1.0 + rate / 100.0, time) - 1.0);

	printf("Simple Interest: %.2f\n", simple_interest);
	printf("Compound Interest: %.2f\n", compound_interest);

	return 0;
}
