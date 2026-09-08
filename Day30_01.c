// Q59: Count even and odd numbers in an array.
#include <stdio.h>

int main()
{
	int n, value, even = 0, odd = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &value);
		if (value % 2 == 0)
			even++;
		else
			odd++;
	}

	printf("Even=%d, Odd=%d", even, odd);
	return 0;
}
