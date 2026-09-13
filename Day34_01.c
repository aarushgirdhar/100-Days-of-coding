/* Q67: Insert an element in an array at a given position.
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int arr[n + 1];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int position, value;
	scanf("%d %d", &position, &value);

	for (int i = n; i >= position; i--) {
		arr[i] = arr[i - 1];
	}
	arr[position - 1] = value;

	for (int i = 0; i <= n; i++) {
		if (i > 0) {
			printf(" ");
		}
		printf("%d", arr[i]);
	}
	printf("\n");

	return 0;
}
