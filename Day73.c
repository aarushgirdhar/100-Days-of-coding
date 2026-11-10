/*Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>

int main(void) {
	char filename[256];
	FILE *file;
	int ch;
	int characters = 0;
	int words = 0;
	int lines = 0;
	int in_word = 0;
	int has_content = 0;
	int last_was_newline = 0;

	if (scanf("%255s", filename) != 1) {
		return 1;
	}

	file = fopen(filename, "r");
	if (file == NULL) {
		perror("Unable to open file");
		return 1;
	}

	while ((ch = fgetc(file)) != EOF) {
		characters++;
		has_content = 1;

		if (ch == '\n') {
			lines++;
			in_word = 0;
			last_was_newline = 1;
		} else {
			last_was_newline = 0;
			if (ch == ' ' || ch == '\t' || ch == '\r' || ch == '\v' || ch == '\f') {
				in_word = 0;
			} else if (!in_word) {
				words++;
				in_word = 1;
			}
		}
	}

	if (has_content && !last_was_newline) {
		lines++;
	}

	fclose(file);

	printf("Characters: %d\n", characters);
	printf("Words: %d\n", words);
	printf("Lines: %d\n", lines);
	return 0;
}
