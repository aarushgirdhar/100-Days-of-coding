/*
Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>

int main(void) {
	int day, year;

	if (scanf("%d/04/%d", &day, &year) == 2) {
		printf("%02d-Apr-%04d\n", day, year);
	}

	return 0;
}
