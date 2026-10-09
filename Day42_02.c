/*Q84: Convert a lowercase string to uppercase without using built-in functions.

Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include <stdio.h>

int main()
{
	char text[1000];
	int i;

	if (scanf("%999s", text) != 1)
		return 0;

	for (i = 0; text[i] != '\0'; i++) {
		if (text[i] >= 'a' && text[i] <= 'z')
			text[i] = text[i] - 'a' + 'A';
	}

	printf("%s\n", text);
	return 0;
}
