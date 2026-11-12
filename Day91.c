/*Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/
#include <stdio.h>

struct Student {
	char name[100];
	int roll_no;
	float marks;
};

int main(void) {
	struct Student student;

	if (scanf("%99s %d %f", student.name, &student.roll_no, &student.marks) != 3) {
		return 1;
	}

	printf("Name: %s | Roll: %d | Marks: %g\n",
		   student.name, student.roll_no, student.marks);
	return 0;
}
