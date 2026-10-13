/*
Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>

int main() {
	char sentence[1000];

	if (fgets(sentence, sizeof(sentence), stdin) == NULL) {
		return 0;
	}

	size_t length = strlen(sentence);
	if (length > 0 && sentence[length - 1] == '\n') {
		sentence[--length] = '\0';
	}

	size_t start = 0;
	while (start < length) {
		if (isspace((unsigned char)sentence[start])) {
			start++;
			continue;
		}

		size_t end = start;
		while (end < length && !isspace((unsigned char)sentence[end])) {
			end++;
		}

		size_t left = start;
		size_t right = end - 1;
		while (left < right) {
			char temp = sentence[left];
			sentence[left++] = sentence[right];
			sentence[right--] = temp;
		}
		start = end;
	}

	puts(sentence);
	return 0;
}
