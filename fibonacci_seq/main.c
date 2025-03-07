#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
	int n;
	uint64_t *arr;
	
	printf("Please enter positive integer N: ");
	scanf("%d", &n);
	
	if (n <= 0) {
		printf("N must be greater than 0!");
		return 0;
	} else if (0 < n && n <= 3) {
		arr = malloc(3 * sizeof(uint64_t));
		arr[0] = 0;
		arr[1] = 1;
		arr[2] = 1;
	} else {
		arr = malloc(n * sizeof(uint64_t));
		arr[0] = 0;
		arr[1] = 1;
		arr[2] = 1;
	}
	
	for (int i = 3; i < n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	
	printf("The Fibonacci sequence with %d numbers is:\n", n);
	for (int j = 0; j < n; j++) {
		if (j != n - 1) printf("%d, ", arr[j]);
		else printf("%d", arr[j]);
	}
	
	return 0;
}