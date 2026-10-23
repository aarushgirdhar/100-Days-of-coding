/* Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/
#include <stdio.h>

int main() {
	int n;
	if (scanf("%d", &n) != 1 || n <= 0) {
		printf("-1\n");
		return 0;
	}

	int *nums = malloc((size_t)n * sizeof(*nums));
	if (nums == NULL) {
		return 1;
	}

	for (int i = 0; i < n; i++) {
		if (scanf("%d", &nums[i]) != 1) {
			free(nums);
			return 1;
		}
	}

	int candidate = 0;
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (count == 0) {
			candidate = nums[i];
			count = 1;
		} else if (nums[i] == candidate) {
			count++;
		} else {
			count--;
		}
	}

	count = 0;
	for (int i = 0; i < n; i++) {
		if (nums[i] == candidate) {
			count++;
		}
	}

	printf("%d\n", count > n / 2 ? candidate : -1);
	free(nums);
	return 0;
}
