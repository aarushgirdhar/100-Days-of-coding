/*Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".

Sample Test Cases:
Input 1:
nums = [2,7,11,15], target = 9
Output 1:
0 1

Input 2:
nums = [3,2,4], target = 6
Output 2:
1 2

Input 3:
nums = [3,3], target = 6
Output 3:
0 1

*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, target;
	if (scanf("%d", &n) != 1 || n < 0) {
		return 0;
	}

	int *nums = malloc((size_t)n * sizeof(*nums));
	if (n > 0 && nums == NULL) {
		return 1;
	}

	for (int i = 0; i < n; i++) {
		if (scanf("%d", &nums[i]) != 1) {
			free(nums);
			return 0;
		}
	}
	if (scanf("%d", &target) != 1) {
		free(nums);
		return 0;
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if ((long long)nums[i] + nums[j] == target) {
				printf("%d %d\n", i, j);
				free(nums);
				return 0;
			}
		}
	}

	printf("-1 -1\n");
	free(nums);
	return 0;
}
