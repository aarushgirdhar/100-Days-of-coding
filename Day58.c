/*Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/
#include <stdio.h>

int main(void) {
	size_t capacity = 256, length = 0;
	char *input = malloc(capacity);
	if (input == NULL) return 1;

	int ch;
	while ((ch = getchar()) != EOF) {
		if (length + 1 >= capacity) {
			capacity *= 2;
			char *larger = realloc(input, capacity);
			if (larger == NULL) {
				free(input);
				return 1;
			}
			input = larger;
		}
		input[length++] = (char)ch;
	}
	input[length] = '\0';

	int *nums = NULL;
	size_t count = 0, nums_capacity = 0;
	char *start = strchr(input, '[');
	char *end = start != NULL ? strchr(start, ']') : NULL;

	if (start != NULL && end != NULL) {
		char *p = start + 1;
		while (p < end) {
			while (p < end && !isdigit((unsigned char)*p) && *p != '-') p++;
			if (p >= end) break;
			char *next;
			long value = strtol(p, &next, 10);
			if (next == p) break;
			if (count == nums_capacity) {
				nums_capacity = nums_capacity == 0 ? 8 : nums_capacity * 2;
				int *larger = realloc(nums, nums_capacity * sizeof(int));
				if (larger == NULL) {
					free(nums);
					free(input);
					return 1;
				}
				nums = larger;
			}
			nums[count++] = (int)value;
			p = next;
		}
	} else {
		int n;
		if (sscanf(input, "%d", &n) != 1 || n <= 0) {
			free(input);
			return 0;
		}
		nums = malloc((size_t)n * sizeof(int));
		if (nums == NULL) {
			free(input);
			return 1;
		}
		nums_capacity = count = (size_t)n;
		char *p = input;
		strtol(p, &p, 10);
		for (size_t i = 0; i < count; i++) {
			while (*p != '\0' && !isdigit((unsigned char)*p) && *p != '-') p++;
			if (*p == '\0') {
				free(nums);
				free(input);
				return 1;
			}
			nums[i] = (int)strtol(p, &p, 10);
		}
	}

	if (count == 0) {
		free(nums);
		free(input);
		return 0;
	}

	int *answer = malloc(count * sizeof(int));
	if (answer == NULL) {
		free(nums);
		free(input);
		return 1;
	}

	int prefix = 1;
	for (size_t i = 0; i < count; i++) {
		answer[i] = prefix;
		prefix *= nums[i];
	}

	int suffix = 1;
	for (size_t i = count; i-- > 0;) {
		answer[i] *= suffix;
		suffix *= nums[i];
	}

	printf("[");
	for (size_t i = 0; i < count; i++)
		printf("%s%d", i == 0 ? "" : ",", answer[i]);
	printf("]\n");

	free(answer);
	free(nums);
	free(input);
	return 0;
}
