/*Q144: Write a function that accepts a structure as parameter and prints its members.

Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/
#include <stdio.h>

struct Student {
	char name[50];
	int roll;
	int marks;
};

void printStudent(struct Student student) {
	printf("Name: %s | Roll: %d | Marks: %d\n",
		   student.name, student.roll, student.marks);
}

int main(void) {
	struct Student student;
	char label[20];

	if (scanf("%19s %49s %d %d", label, student.name,
			  &student.roll, &student.marks) != 4) {
		return 1;
	}

	printStudent(student);
	return 0;
}
