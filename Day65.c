/*Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>

int main(void) {
	char s[1000], t[1000];
	int frequency[26] = {0};

	if (scanf("%999s %999s", s, t) != 2) {
		return 0;
	}

	for (int i = 0; s[i] != '\0'; i++) {
		frequency[s[i] - 'a']++;
	}
	for (int i = 0; t[i] != '\0'; i++) {
		frequency[t[i] - 'a']--;
	}

	for (int i = 0; i < 26; i++) {
		if (frequency[i] != 0) {
			printf("Not Anagram\n");
			return 0;
		}
	}

	printf("Anagram\n");
	return 0;
}
