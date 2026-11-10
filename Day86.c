/*Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>
#include <string.h>

enum MenuChoice {
	ADD,
	SUBTRACT,
	MULTIPLY
};

int main(void) {
	char operation[16];
	int first, second;
	enum MenuChoice choice;

	if (scanf("%15s %d %d", operation, &first, &second) != 3) {
		return 1;
	}

	if (strcmp(operation, "ADD") == 0) {
		choice = ADD;
	} else if (strcmp(operation, "SUBTRACT") == 0) {
		choice = SUBTRACT;
	} else if (strcmp(operation, "MULTIPLY") == 0) {
		choice = MULTIPLY;
	} else {
		return 1;
	}

	switch (choice) {
		case ADD:
			printf("%d\n", first + second);
			break;
		case SUBTRACT:
			printf("%d\n", first - second);
			break;
		case MULTIPLY:
			printf("%d\n", first * second);
			break;
	}

	return 0;
}
