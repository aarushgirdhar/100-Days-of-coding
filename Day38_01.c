/*Q75: Add two matrices.
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>

int main()
{
	int rows1, cols1, rows2, cols2;
	scanf("%d %d", &rows1, &cols1);

	int first[rows1][cols1];
	for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < cols1; j++) {
			scanf("%d", &first[i][j]);
		}
	}

	scanf("%d %d", &rows2, &cols2);
	int second[rows2][cols2];
	for (int i = 0; i < rows2; i++) {
		for (int j = 0; j < cols2; j++) {
			scanf("%d", &second[i][j]);
		}
	}

	if (rows1 != rows2 || cols1 != cols2) {
		return 0;
	}

	for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < cols1; j++) {
			if (j > 0) {
				printf(" ");
			}
			printf("%d", first[i][j] + second[i][j]);
		}
		printf("\n");
	}

	return 0;
}
