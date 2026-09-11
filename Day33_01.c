// Q65: Search in a sorted array using binary search.
#include <stdio.h>

int main()
 {
	int n;
	scanf("%d", &n);

	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int target;
	scanf("%d", &target);

	int left = 0, right = n - 1;
	while (left <= right) {
		int mid = left + (right - left) / 2;

		if (arr[mid] == target) {
			printf("Found at index %d\n", mid);
			return 0;
		}

		if (arr[mid] < target) {
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}

	printf("-1\n");
	return 0;
}
