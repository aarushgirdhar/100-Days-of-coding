/*Q145: Return a structure containing top student's details from a function.

Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char name[100];
	int roll;
	int marks;
} Student;

Student findTopStudent(const Student students[], int count) {
	Student top = students[0];
	for (int i = 1; i < count; i++) {
		if (students[i].marks > top.marks) {
			top = students[i];
		}
	}
	return top;
}

int main(void) {
	char input[4096];
	if (fgets(input, sizeof(input), stdin) == NULL) {
		return 0;
	}

	char *token = strtok(input, " \t\r\n,:|");
	if (token == NULL) {
		return 0;
	}
	int count = atoi(token);
	if (count <= 0) {
		return 0;
	}

	Student students[count];
	int i = 0;
	while (i < count && (token = strtok(NULL, " \t\r\n,:|")) != NULL) {
		if (strcmp(token, "students") == 0 || strcmp(token, "student") == 0) {
			continue;
		}

		strncpy(students[i].name, token, sizeof(students[i].name) - 1);
		students[i].name[sizeof(students[i].name) - 1] = '\0';

		char *roll = strtok(NULL, " \t\r\n,:|");
		char *marks = strtok(NULL, " \t\r\n,:|");
		if (roll == NULL || marks == NULL) {
			return 0;
		}
		students[i].roll = atoi(roll);
		students[i].marks = atoi(marks);
		i++;
	}

	if (i != count) {
		return 0;
	}

	Student top = findTopStudent(students, count);
	printf("Top Student: %s | Roll: %d | Marks: %d\n",
		   top.name, top.roll, top.marks);
	return 0;
}
