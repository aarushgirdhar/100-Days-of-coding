// Q70: Rotate an array to the right by k positions.
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	if (n <= 0) {
		return 0;
	}

	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int k;
	scanf("%d", &k);
	k %= n;

	for (int count = 0; count < k; count++) {
		int last = arr[n - 1];
		for (int i = n - 1; i > 0; i--) {
			arr[i] = arr[i - 1];
		}
		arr[0] = last;
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
