#include <stdio.h>

int main() 
{
	int n, m;

	scanf("%d", &n);
	int first[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &first[i]);
	}

	scanf("%d", &m);
	int second[m];
	for (int i = 0; i < m; i++) {
		scanf("%d", &second[i]);
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", first[i]);
	}
	for (int i = 0; i < m; i++) {
		printf("%d", second[i]);
		if (i < m - 1) {
			printf(" ");
		}
	}
	printf("\n");

	return 0;
}
