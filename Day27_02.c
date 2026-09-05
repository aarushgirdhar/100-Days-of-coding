/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *

Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>

int main()
{
    int layers = 4;

    for (int i = 1; i <= layers; i++) {
        for (int j = i; j < layers; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = layers - 1; i >= 1; i--) {
        for (int j = i; j < layers; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}