/* Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345

Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/
 #include <stdio.h>

int main()
{
	for (int row = 1; row <= 5; row++) {
		for (int spaces = 0; spaces < 5 - row; spaces++) {
			printf(" ");
		}
		for (int number = 6 - row; number <= 5; number++) {
			printf("%d", number);
		}
		printf("\n");
	}

	return 0;
}
