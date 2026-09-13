/*Q68: Delete an element from an array.
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int element;
	scanf("%d", &element);

	int deleted = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == element && !deleted) {
			deleted = 1;
			continue;
		}
		if (deleted) {
			arr[i - 1] = arr[i];
		}
	}

	if (deleted) {
		n--;
	}

	for (int i = 0; i < n; i++) {
		if (i > 0) {
			printf(" ");
		}
		printf("%d", arr[i]);
	}
	printf("\n");

	return 0;
}
