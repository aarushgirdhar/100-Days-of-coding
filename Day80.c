/*Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>

int main(void) {
	int count;
	char name[100];
	int roll;
	int marks;

	if (scanf("%d", &count) != 1 || count < 0) {
		return 1;
	}

	FILE *file = fopen("students.txt", "w");
	if (file == NULL) {
		perror("Unable to open file");
		return 1;
	}

	for (int i = 0; i < count; i++) {
		if (scanf("%99s %d %d", name, &roll, &marks) != 3) {
			fclose(file);
			return 1;
		}
		fprintf(file, "%s %d %d\n", name, roll, marks);
	}
	fclose(file);

	file = fopen("students.txt", "r");
	if (file == NULL) {
		perror("Unable to open file");
		return 1;
	}

	while (fscanf(file, "%99s %d %d", name, &roll, &marks) == 3) {
		printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
	}

	fclose(file);
	return 0;
}
