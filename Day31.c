// Q61: Search for an element in an array using linear search.
#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);

	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int target;
	scanf("%d", &target);

	for (int i = 0; i < n; i++) {
		if (arr[i] == target) {
			printf("Found at index %d", i);
			return 0;
		}
	}

	printf("-1");
	return 0;
}
