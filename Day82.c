/*Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>
#include <string.h>

enum TrafficLight {
	RED,
	YELLOW,
	GREEN
};

int main(void) {
	char input[16];
	enum TrafficLight light;

	if (scanf("%15s", input) != 1) {
		return 0;
	}

	if (strcmp(input, "RED") == 0) {
		light = RED;
	} else if (strcmp(input, "YELLOW") == 0) {
		light = YELLOW;
	} else if (strcmp(input, "GREEN") == 0) {
		light = GREEN;
	} else {
		return 0;
	}

	switch (light) {
		case RED:
			printf("Stop\n");
			break;
		case YELLOW:
			printf("Wait\n");
			break;
		case GREEN:
			printf("Go\n");
			break;
	}

	return 0;
}
