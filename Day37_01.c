/* Q73: Find the sum of each row of a matrix and store it in an array.
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15
*/
#include <stdio.h>

int main(void) {
	int rows, cols;
	scanf("%d %d", &rows, &cols);

	int rowSums[rows];
	for (int i = 0; i < rows; i++) {
		rowSums[i] = 0;
		for (int j = 0; j < cols; j++) {
			int value;
			scanf("%d", &value);
			rowSums[i] += value;
		}
	}

	for (int i = 0; i < rows; i++) {
		if (i > 0) printf(" ");
		printf("%d", rowSums[i]);
	}
	printf("\n");

	return 0;
}
