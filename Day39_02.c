/*
Q78: Find the sum of main diagonal elements for a square matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int main()
{
    int rows, columns;
    scanf("%d %d", &rows, &columns);

    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            int value;
            scanf("%d", &value);
            if (i == j) {
                sum += value;
            }
        }
    }

    printf("%d\n", sum);
    return 0;
}