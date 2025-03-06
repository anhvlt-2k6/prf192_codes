#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n, sum = 0, count = -1, *arr;
	
	arr = malloc(1024 * sizeof(int));
	
	printf("Please enter positive integer N: ");
	scanf("%d", &n);
	
	if (n <= 0) {
		printf("Accept positive number only!");
		return 0;
	}
	
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			count++;
			arr[count] = i;
		}
	}
	
	printf("The sum of all divisors of %d is\nS = ", n);
	for (int j = 0; j <= count; j++) {
		if (j != count) {
			printf("%d + ", arr[j]);
		} else {
			printf("%d = ", arr[j]);
		}
		sum += arr[j];
	}
	
	printf("%d", sum);
	
	return 0;
}