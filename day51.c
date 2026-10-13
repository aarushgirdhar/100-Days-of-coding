/*
Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/
#include <stdio.h>

int main() {
	int n, target;

	/* Input format: n, followed by n sorted integers, then target. */
	if (scanf("%d", &n) != 1 || n < 0) {
		return 0;
	}

	int nums[n > 0 ? n : 1];
	for (int i = 0; i < n; i++) {
		if (scanf("%d", &nums[i]) != 1) {
			return 0;
		}
	}
	if (scanf("%d", &target) != 1) {
		return 0;
	}

	int low = 0, high = n;
	while (low < high) {
		int mid = low + (high - low) / 2;
		if (nums[mid] < target) {
			low = mid + 1;
		} else {
			high = mid;
		}
	}
	int first = low;

	if (first == n || nums[first] != target) {
		printf("-1,-1\n");
		return 0;
	}

	low = first;
	high = n;
	while (low < high) {
		int mid = low + (high - low) / 2;
		if (nums[mid] <= target) {
			low = mid + 1;
		} else {
			high = mid;
		}
	}

	printf("%d,%d\n", first, low - 1);
	return 0;
}
