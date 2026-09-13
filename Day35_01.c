/*

Q69: Find the second largest element in an array.
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
 #include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int largest = arr[0];
	int secondLargest = arr[0];

	for (int i = 1; i < n; i++) {
		if (arr[i] > largest) {
			secondLargest = largest;
			largest = arr[i];
		} else if (arr[i] > secondLargest && arr[i] < largest) {
			secondLargest = arr[i];
		}
	}

	printf("%d\n", secondLargest);
	return 0;
}
