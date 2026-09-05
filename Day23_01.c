 #include <stdio.h>

int main()
{
	int n;
	double sum = 0.0;
    printf("Enter no.:");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		sum += (2.0 * i) / (4.0 * i - 1.0);
	}

	printf("Approximate sum: %.2f\n", sum);

	return 0;
}
