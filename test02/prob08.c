#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(int n) {
	if (n <= 1) return false;
	int half = (int)(n/2 + 1);
	
	for (int i = 2; i < half; i++) {
		if (n % i == 0) return false;
	}
	
	return true;
}

int main() {
	int n;
	scanf("%d", &n);
	
	if (isPrime(n)) {
		printf("0x%X", n);
	} else {
		printf("%d is not a prime number", n);
	}
	
	return 0;
}