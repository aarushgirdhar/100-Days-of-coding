/*Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/
#include <stdio.h>

int main(void) {
	char name[100];
	char input[256];
	int age;
	FILE *file;

	if (fgets(input, sizeof(input), stdin) == NULL) {
		return 1;
	}

	if (sscanf(input, "Name: %99[^,], Age: %d", name, &age) != 2 &&
		sscanf(input, "%99s %d", name, &age) != 2) {
		return 1;
	}

	file = fopen("info.txt", "w");
	if (file == NULL) {
		return 1;
	}

	fprintf(file, "Name: %s\nAge: %d\n", name, age);
	fclose(file);

	printf("File created successfully! Data written to info.txt\n");
	return 0;
}
