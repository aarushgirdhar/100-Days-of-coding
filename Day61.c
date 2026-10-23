/*Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/
#include <stdio.h>

int main(void) {
	int n;

	/* Input format: n, followed by n array elements, then k. */
	if (scanf("%d", &n) != 1 || n <= 0) {
		return 0;
	}

	int *arr = malloc((size_t)n * sizeof(*arr));
	int *negativeIndices = malloc((size_t)n * sizeof(*negativeIndices));
	if (arr == NULL || negativeIndices == NULL) {
		free(arr);
		free(negativeIndices);
		return 1;
	}

	for (int i = 0; i < n; i++) {
		if (scanf("%d", &arr[i]) != 1) {
			free(arr);
			free(negativeIndices);
			return 0;
		}
	}

	int k;
	if (scanf("%d", &k) != 1) {
		free(arr);
		free(negativeIndices);
		return 0;
	}

	if (k > 0 && k <= n) {
		int front = 0;
		int back = 0;

		for (int i = 0; i < n; i++) {
			if (arr[i] < 0) {
				negativeIndices[back++] = i;
			}

			if (i >= k - 1) {
				int windowStart = i - k + 1;
				while (front < back && negativeIndices[front] < windowStart) {
					front++;
				}

				printf("%d", front < back ? arr[negativeIndices[front]] : 0);
				if (i < n - 1) {
					printf(" ");
				}
			}
		}
		printf("\n");
	}

	free(arr);
	free(negativeIndices);
	return 0;
}
