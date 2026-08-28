// Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>

int main()
{
	int first, second, multiple;

	printf("Enter two numbers: ");
	scanf("%d %d", &first, &second);

	if (first == 0 || second == 0) {
		printf("LCM = 0\n");
		return 0;
	}

	multiple = (first > second) ? first : second;

	while (multiple % first != 0 || multiple % second != 0) {
		multiple++;
	}

	printf("LCM = %d\n", multiple);
	return 0;
}
