/*
Q90: Toggle case of each character in a string.

Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include <stdio.h>

int main() {
	char str[1000];

	if (fgets(str, sizeof(str), stdin) == NULL) {
		return 0;
	}

	for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
		unsigned char ch = (unsigned char)str[i];
		if (islower(ch)) {
			str[i] = (char)toupper(ch);
		} else if (isupper(ch)) {
			str[i] = (char)tolower(ch);
		}
	}

	printf("%s\n", str);
	return 0;
}
