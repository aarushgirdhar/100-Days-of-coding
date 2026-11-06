/*Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int m, n;

	if (scanf("%d %d", &m, &n) != 2 || m < 0 || n < 0) {
		return 1;
	}

	int *nums1 = malloc((size_t)m * sizeof(int));
	int *nums2 = malloc((size_t)n * sizeof(int));
	int *merged = malloc((size_t)(m + n) * sizeof(int));

	if ((m > 0 && nums1 == NULL) || (n > 0 && nums2 == NULL) ||
		(m + n > 0 && merged == NULL)) {
		free(nums1);
		free(nums2);
		free(merged);
		return 1;
	}

	for (int i = 0; i < m; i++) {
		if (scanf("%d", &nums1[i]) != 1) {
			free(nums1);
			free(nums2);
			free(merged);
			return 1;
		}
	}
	for (int i = 0; i < n; i++) {
		if (scanf("%d", &nums2[i]) != 1) {
			free(nums1);
			free(nums2);
			free(merged);
			return 1;
		}
	}

	int i = 0, j = 0, k = 0;
	while (i < m && j < n) {
		if (nums1[i] <= nums2[j]) {
			merged[k++] = nums1[i++];
		} else {
			merged[k++] = nums2[j++];
		}
	}
	while (i < m) {
		merged[k++] = nums1[i++];
	}
	while (j < n) {
		merged[k++] = nums2[j++];
	}

	for (int x = 0; x < k; x++) {
		if (x > 0) {
			printf(" ");
		}
		printf("%d", merged[x]);
	}
	printf("\n");

	free(nums1);
	free(nums2);
	free(merged);
	return 0;
}
