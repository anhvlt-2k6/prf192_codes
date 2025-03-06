#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, *arr, count = -1, sum = 0;
	arr = malloc(1024 * sizeof(int));

	printf("Please enter positive integer N: ");
	scanf("%d", &n);
	
	if (n <= 0) {
		printf("Accept positive number only!");
		return 0;
	}

	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			count++;
			arr[count] = i;
		}
	}

	for (int j = 0; j <= count; j++) {
		sum += arr[j];
	}

	if (sum != n) printf("%d is not a perfect number", n);
	else printf("%d is a perfect number", n);

	return 0;
}

