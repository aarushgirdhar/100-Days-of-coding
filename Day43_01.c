/*Q85: Reverse a string.

Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>

int main(void) {
	char str[1000];

	if (fgets(str, sizeof(str), stdin) == NULL) {
		return 0;
	}

	size_t length = strcspn(str, "\r\n");
	for (size_t i = 0; i < length / 2; ++i) {
		char temp = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = temp;
	}

	str[length] = '\0';
	printf("%s\n", str);
	return 0;
}
