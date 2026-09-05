/* Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
 #include <stdio.h>

int main()
{
	for (int row = 0; row < 5; row++) {
		for (int space = 0; space < row; space++) {
			printf(" ");
		}
		for (int star = 0; star < 5 - row; star++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
