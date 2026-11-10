/*Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>
#include <string.h>

int main(void) {
	FILE *file = fopen("data.txt", "a+");
	char text[1024];

	if (file == NULL) {
		perror("Unable to open data.txt");
		return 1;
	}

	printf("Enter text to append: ");
	if (fgets(text, sizeof(text), stdin) == NULL) {
		fclose(file);
		return 1;
	}

	/* Separate the new line from existing content if needed. */
	if (fseek(file, 0, SEEK_END) == 0) {
		long length = ftell(file);
		if (length > 0) {
			int last_character;
			if (fseek(file, -1, SEEK_END) == 0 &&
				(last_character = fgetc(file)) != '\n' && last_character != '\r') {
				fputc('\n', file);
			}
		}
	}

	fputs(text, file);
	if (strchr(text, '\n') == NULL) {
		fputc('\n', file);
	}

	if (fclose(file) != 0) {
		perror("Unable to save data.txt");
		return 1;
	}

	printf("File updated successfully with appended text.\n");
	return 0;
}
