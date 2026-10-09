/*Q88: Replace spaces with hyphens in a string.

Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>

int main() {
	char text[1000];

	if (fgets(text, sizeof(text), stdin) == NULL) {
		return 0;
	}

	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] == ' ') {
			text[i] = '-';
		}
	}

	printf("%s", text);
	return 0;
}
