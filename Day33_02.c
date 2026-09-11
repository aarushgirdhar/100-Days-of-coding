//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int arr[n + 1];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int value;
	scanf("%d", &value);

	int position = n;
	for (int i = 0; i < n; i++) {
		if (value < arr[i]) {
			position = i;
			break;
		}
	}

	for (int i = n; i > position; i--) {
		arr[i] = arr[i - 1];
	}
	arr[position] = value;

	for (int i = 0; i <= n; i++) {
		if (i > 0) {
			printf(" ");
		}
		printf("%d", arr[i]);
	}
	printf("\n");

	return 0;
}
