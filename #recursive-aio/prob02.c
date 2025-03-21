#include <stdio.h>
#include <stdlib.h>

/*
using only recursive to product from

1 * 2 * ... * n-th
*/

int product(int n) {
	if (n > 1) {
		return (n * product(n - 1)); // you can write back to n-th * ... * 3 * 2 * 1
	} else {
		return (1);
	}
}

int main() {
	
	int n;
	
	scanf("%d", &n);
	
	printf("%d", product(n));
	
	return 0;
}