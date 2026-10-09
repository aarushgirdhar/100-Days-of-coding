/*Q87: Count spaces, digits, and special characters in a string.

Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>

int main()
{
	char text[1000];
	int spaces = 0;
	int digits = 0;
	int special = 0;

	if (fgets(text, sizeof(text), stdin) == NULL) {
		return 0;
	}

	for (int i = 0; text[i] != '\0' && text[i] != '\n'; i++) {
		unsigned char ch = (unsigned char)text[i];

		if (ch == ' ') {
			spaces++;
		} else if (isdigit(ch)) {
			digits++;
		} else if (!isalpha(ch)) {
			special++;
		}
	}

	printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
	return 0;
}
