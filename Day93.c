/*Q143: Find and print the student with the highest marks.

Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char topperName[30];
    int topperRoll = 0;
    int topperMarks = -1;

    for (int i = 0; i < n; i++) {
        char name[30];
        int roll, marks;

        scanf("%s %d %d", name, &roll, &marks);

        if (marks > topperMarks) {
            strcpy(topperName, name);
            topperRoll = roll;
            topperMarks = marks;
        }
    }

    printf("Topper: %s (Marks: %d)\n", topperName, topperMarks);
    return 0;
}
