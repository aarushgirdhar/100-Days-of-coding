/*Q89: Count frequency of a given character in a string.

Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>

int main() {
	char text[1000];
	char character;
	int frequency = 0;

	if (fgets(text, sizeof(text), stdin) == NULL || scanf(" %c", &character) != 1) {
		return 0;
	}

	for (int i = 0; text[i] != '\0' && text[i] != '\n'; i++) {
		if (text[i] == character) {
			frequency++;
		}
	}

	printf("%d\n", frequency);
	return 0;
}
