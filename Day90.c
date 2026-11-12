/*Q140: Define a struct with enum Gender and print person's gender.

Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE };

struct Person {
	enum Gender gender;
};

int main(void) {
	char input[32];
	struct Person person;

	if (scanf("%31s", input) != 1) return 0;

	person.gender = strstr(input, "FEMALE") ? FEMALE : MALE;
	printf("%s\n", person.gender == MALE ? "Male" : "Female");
	return 0;
}
