// Q64: Find the digit that occurs the most times in an integer.
#include <stdio.h>

int main()
{
	long long number;
	int frequency[10] = {0};

	if (scanf("%lld", &number) != 1)
		return 0;

	if (number == 0) {
		frequency[0] = 1;
	} else {
		if (number < 0)
			number = -number;

		while (number > 0) {
			frequency[number % 10]++;
			number /= 10;
		}
	}

	int mostFrequent = 0;
	for (int digit = 1; digit <= 9; digit++) {
		if (frequency[digit] > frequency[mostFrequent])
			mostFrequent = digit;
	}

	printf("%d\n", mostFrequent);
	return 0;
}
