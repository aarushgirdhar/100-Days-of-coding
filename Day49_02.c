/*
Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>

int main() {
	char name[256];
	char *words[128];
	int count = 0;

	if (fgets(name, sizeof(name), stdin) == NULL) {
		return 0;
	}

	char *word = strtok(name, " \t\r\n");
	while (word != NULL && count < 128) {
		words[count++] = word;
		word = strtok(NULL, " \t\r\n");
	}

	if (count == 0) {
		return 0;
	}

	for (int i = 0; i < count - 1; i++) {
		printf("%c.", words[i][0]);
	}
	if (count > 1) {
		putchar(' ');
	}
	printf("%s\n", words[count - 1]);
	return 0;
}

