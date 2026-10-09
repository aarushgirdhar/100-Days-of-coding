/*Q86: Check if a string is a palindrome.

Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
	char text[1000];

	if (fgets(text, sizeof(text), stdin) == NULL) {
		return 0;
	}

	text[strcspn(text, "\r\n")] = '\0';

	int left = 0;
	int right = (int)strlen(text) - 1;
	int palindrome = 1;

	while (left < right) {
		if (text[left] != text[right]) {
			palindrome = 0;
			break;
		}
		left++;
		right--;
	}

	printf("%s\n", palindrome ? "Palindrome" : "Not palindrome");
	return 0;
}