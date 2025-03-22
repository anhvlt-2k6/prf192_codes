#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(int n) {
	if (n == 1) return false;
	for (int j = 2; j < n; j++) {
		if (n % j == 0) return false;
	}
	
	return true;
}


int main() {
	
	int n, *arr, count = 0;
	
	scanf("%d", &n);
	
	if (n < 1) {
		printf("Invalid Input");
		return 0;
	}
	
	arr = malloc(n * sizeof(int));
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	for (int k = 0; k < n; k++) {
		if (isPrime(arr[k])) {
			printf("%d ", arr[k] * arr[k]);
			count += 1;
		} 
	}
	
	if (count == 0) {
		printf("No primes");
	}
	
	return 0;
}