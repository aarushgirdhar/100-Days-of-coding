/* Q76: Check if a matrix is symmetric.
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

int main()
{
	int rows, cols;
	scanf("%d %d", &rows, &cols);

	int matrix[rows][cols];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}

	int symmetric = (rows == cols);
	if (symmetric) {
		for (int i = 0; i < rows && symmetric; i++) {
			for (int j = i + 1; j < cols; j++) {
				if (matrix[i][j] != matrix[j][i]) {
					symmetric = 0;
					break;
				}
			}
		}
	}

	printf("%s\n", symmetric ? "True" : "False");
	return 0;
}
