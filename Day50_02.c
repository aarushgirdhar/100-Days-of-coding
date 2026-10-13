/*
Q100: Print all sub-strings of a string.

Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>

int main() {
	char str[1000];

	if (scanf("%999s", str) != 1) {
		return 0;
	}

	int first = 1;
	size_t length = strlen(str);

	for (size_t start = 0; start < length; start++) {
		for (size_t end = start; end < length; end++) {
			if (!first) {
				printf(",");
			}
			for (size_t i = start; i <= end; i++) {
				putchar(str[i]);
			}
			first = 0;
		}
	}

	putchar('\n');
	return 0;
}
