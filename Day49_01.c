/*
Q97: Print the initials of a name.

Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>

int main()
{
	char name[1000];

	if (fgets(name, sizeof(name), stdin) == NULL)
		return 0;

	int word_start = 1;
	for (int i = 0; name[i] != '\0' && name[i] != '\n'; ++i) {
		if (isspace((unsigned char)name[i])) {
			word_start = 1;
		} else if (word_start) {
			printf("%c.", name[i]);
			word_start = 0;
		}
	}

	return 0;
}
