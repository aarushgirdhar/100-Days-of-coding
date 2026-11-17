/*Q146: Create Employee structure with nested Date structure for joining date and print details.

Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct Employee {
	char name[100];
	int id;
	struct Date {
		int day;
		int month;
		int year;
	} joiningDate;
};

int main(void) {
	struct Employee employee;
	char line[256];

	if (fgets(line, sizeof(line), stdin) == NULL ||
		sscanf(line, "Employee: %99[^|] | ID: %d | Joining Date: %d %d %d",
			   employee.name, &employee.id, &employee.joiningDate.day,
			   &employee.joiningDate.month, &employee.joiningDate.year) != 5) {
		return 0;
	}

	char *name = employee.name;
	while (isspace((unsigned char)*name)) {
		name++;
	}
	char *end = name + strlen(name);
	while (end > name && isspace((unsigned char)end[-1])) {
		*--end = '\0';
	}

	printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
		   name, employee.id, employee.joiningDate.day,
		   employee.joiningDate.month, employee.joiningDate.year);
	return 0;
}
