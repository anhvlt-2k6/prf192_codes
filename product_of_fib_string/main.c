#include <stdio.h>
#include <stdlib.h>

/* The problem is like, take the n is int then make it run...
1 * 1 * 2 * 3 * 5 * ... * (n-th number)

ONLY USE RECURSIVE METHOD
*/

int calc_fib_product(int n, int a, int b) {
	if (n == 1) return a;
	return a * calc_fib_product(n - 1, b, a + b);
}

int main() {
	int n; 
	
	scanf("%d", &n);
	
	if (n <= 0) {
		printf("Invalid Input");
	} else if (n >= 1 && n <= 2) {
		printf("1");
	} else {
		printf("%d", calc_fib_product(n, 1, 1));
	}
	
	return 0;
}