/*Q120: Write a program to take a string input. Change it to sentence case.

Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include <ctype.h>
#include <stdio.h>

#define MAX_LENGTH 1000

int main(void)
{
	char str[MAX_LENGTH];

	if (fgets(str, sizeof str, stdin) == NULL)
		return 0;

	int startOfWord = 1;
	for (int i = 0; str[i] != '\0'; ++i) {
		unsigned char ch = (unsigned char)str[i];

		if (isspace(ch)) {
			startOfWord = 1;
		} else if (isalpha(ch)) {
			str[i] = (char)(startOfWord ? toupper(ch) : tolower(ch));
			startOfWord = 0;
		} else {
			startOfWord = 0;
		}
	}

	printf("%s", str);
	return 0;
}
