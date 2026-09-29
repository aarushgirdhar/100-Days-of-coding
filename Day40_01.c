/* 
Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main()
{
	int rows, cols;
	if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
		return 0;
	}

	int *matrix = malloc((size_t)rows * cols * sizeof(*matrix));
	if (matrix == NULL) {
		return 0;
	}

	for (int i = 0; i < rows * cols; i++) {
		if (scanf("%d", &matrix[i]) != 1) {
			free(matrix);
			return 0;
		}
	}

	int first = 1;
	for (int diagonal = 0; diagonal < rows + cols - 1; diagonal++) {
		int row = diagonal < rows ? diagonal : rows - 1;
		int col = diagonal - row;

		while (row >= 0 && col < cols) {
			if (!first) {
				printf(" ");
			}
			printf("%d", matrix[row * cols + col]);
			first = 0;
			row--;
			col++;
		}
	}

	printf("\n");
	free(matrix);
	return 0;
}
