/*Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	size_t capacity = 128, length = 0;
	char *input = malloc(capacity);
	if (input == NULL) return 1;

	int ch;
	while ((ch = getchar()) != EOF && ch != '\n') {
		if (length + 1 >= capacity) {
			capacity *= 2;
			char *grown = realloc(input, capacity);
			if (grown == NULL) {
				free(input);
				return 1;
			}
			input = grown;
		}
		input[length++] = (char)ch;
	}
	input[length] = '\0';

	/* Accept either a raw string or input in the form s = "...". */
	char *text = strchr(input, '=');
	text = text == NULL ? input : text + 1;
	while (isspace((unsigned char)*text)) text++;

	if (*text == '"' || *text == '\'') {
		char quote = *text++;
		char *end = strchr(text, quote);
		if (end != NULL) *end = '\0';
	} else {
		char *end = text + strlen(text);
		while (end > text && isspace((unsigned char)end[-1])) *--end = '\0';
	}

	size_t last_seen[256];
	for (size_t i = 0; i < 256; i++) last_seen[i] = (size_t)-1;

	size_t window_start = 0, longest = 0;
	for (size_t i = 0; text[i] != '\0'; i++) {
		unsigned char c = (unsigned char)text[i];
		if (last_seen[c] != (size_t)-1 && last_seen[c] >= window_start)
			window_start = last_seen[c] + 1;
		last_seen[c] = i;
		size_t current_length = i - window_start + 1;
		if (current_length > longest) longest = current_length;
	}

	printf("%zu\n", longest);
	free(input);
	return 0;
}
