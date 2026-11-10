/*Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include <stdio.h>

int main(void) {
	FILE *file = fopen("numbers.txt", "r");
	long long number, sum = 0;
	int count = 0;

	if (file == NULL) {
		return 1;
	}

	while (fscanf(file, "%lld", &number) == 1) {
		sum += number;
		count++;
	}

	fclose(file);

	printf("Sum = %lld\n", sum);
	printf("Average = %.2f\n", count > 0 ? (double)sum / count : 0.0);

	return 0;
}
