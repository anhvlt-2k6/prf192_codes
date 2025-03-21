#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(int n) {
	if (n < 2) return false;
	for (int i = 2; i <= (int)n/2; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	
	return true;
}


int main() {
	
	int n;
	
	scanf("%d", &n);
	
	if (isPrime(n)) {
		printf("%#x", n);
	} else {
		printf("%d is not a prime number", n);
	}
	
	return 0;
}