/*
Q93: Check if two strings are anagrams of each other.

Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>

int main() {
	char first[1000];
	char second[1000];
	int counts[256] = {0};

	if (scanf("%999s %999s", first, second) != 2) {
		return 0;
	}

	if (strlen(first) != strlen(second)) {
		printf("Not anagrams\n");
		return 0;
	}

	for (size_t i = 0; first[i] != '\0'; ++i) {
		++counts[(unsigned char)first[i]];
		--counts[(unsigned char)second[i]];
	}

	for (int i = 0; i < 256; ++i) {
		if (counts[i] != 0) {
			printf("Not anagrams\n");
			return 0;
		}
	}

	printf("Anagrams\n");
	return 0;
}
