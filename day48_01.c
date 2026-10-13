/*
Q95: Check if one string is a rotation of another.

Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>

int main() {
	char first[1001];
	char second[1001];
	char doubled[2001];

	if (scanf("%1000s %1000s", first, second) != 2) {
		return 0;
	}

	if (strlen(first) != strlen(second)) {
		puts("Not rotation");
		return 0;
	}

	snprintf(doubled, sizeof(doubled), "%s%s", first, first);
	puts(strstr(doubled, second) != NULL ? "Rotation" : "Not rotation");
	return 0;
}
