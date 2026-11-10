/*Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main(void)
{
	char source[256];
	char destination[256];
	FILE *sourceFile;
	FILE *destinationFile;
	int ch;

	if (scanf("%255s %255s", source, destination) != 2) {
		return 1;
	}

	sourceFile = fopen(source, "rb");
	if (sourceFile == NULL) {
		printf("Unable to open source file\n");
		return 1;
	}

	destinationFile = fopen(destination, "wb");
	if (destinationFile == NULL) {
		printf("Unable to open destination file\n");
		fclose(sourceFile);
		return 1;
	}

	while ((ch = fgetc(sourceFile)) != EOF) {
		if (fputc(ch, destinationFile) == EOF) {
			printf("Error copying file\n");
			fclose(sourceFile);
			fclose(destinationFile);
			return 1;
		}
	}

	fclose(sourceFile);
	fclose(destinationFile);
	printf("File copied successfully to %s\n", destination);
	return 0;
}
