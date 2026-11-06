/*Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/
#include <stdio.h>

int main(void) {
	int n;
	if (scanf("%d", &n) != 1 || n < 0) {
		return 0;
	}

	long long expected = (long long)n * (n + 1) / 2;
	long long actual = 0;
	for (int i = 0; i < n; i++) {
		int value;
		if (scanf("%d", &value) != 1) {
			return 0;
		}
		actual += value;
	}

	printf("%lld\n", expected - actual);
	return 0;
}
