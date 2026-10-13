/*
Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>

int main() {
	char str[1000];
	int seen[26] = {0};

	if (scanf("%999s", str) != 1) {
		return 0;
	}

	for (int i = 0; str[i] != '\0'; i++) {
		int index = str[i] - 'a';
		if (seen[index]) {
			printf("%c\n", str[i]);
			return 0;
		}
		seen[index] = 1;
	}

	return 0;
}
