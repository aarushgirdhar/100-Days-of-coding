/* Q74: Find the transpose of a matrix.
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/
#include <stdio.h>

int main()
{
	int rows, columns;
	scanf("%d %d", &rows, &columns);

	int matrix[rows][columns];

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}

	for (int j = 0; j < columns; j++) {
		for (int i = 0; i < rows; i++) {
			printf("%d", matrix[i][j]);
			if (i < rows - 1) {
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}
