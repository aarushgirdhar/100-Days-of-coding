/*Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>
#include <string.h>

enum Status {
	SUCCESS,
	FAILURE,
	TIMEOUT
};

int main(void) {
	char input[32];
	enum Status status;

	if (scanf("%31s", input) != 1) {
		return 0;
	}

	if (strcmp(input, "SUCCESS") == 0) {
		status = SUCCESS;
	} else if (strcmp(input, "FAILURE") == 0) {
		status = FAILURE;
	} else if (strcmp(input, "TIMEOUT") == 0) {
		status = TIMEOUT;
	} else {
		return 0;
	}

	switch (status) {
		case SUCCESS:
			printf("Operation successful\n");
			break;
		case FAILURE:
			printf("Operation failed\n");
			break;
		case TIMEOUT:
			printf("Operation timed out\n");
			break;
	}

	return 0;
}
