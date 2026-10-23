/*Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/
#include <stdio.h>

int main(void) {
	int n;
	if (scanf("%d", &n) != 1 || n <= 0) {
		return 0;
	}

	long long value;
	if (scanf("%lld", &value) != 1) {
		return 0;
	}

	long long current_sum = value;
	long long max_sum = value;

	for (int i = 1; i < n; i++) {
		if (scanf("%lld", &value) != 1) {
			return 0;
		}

		if (current_sum + value < value) {
			current_sum = value;
		} else {
			current_sum += value;
		}

		if (current_sum > max_sum) {
			max_sum = current_sum;
		}
	}

	printf("%lld\n", max_sum);
	return 0;
}
