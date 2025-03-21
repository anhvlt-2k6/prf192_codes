#include <stdio.h>
#include <stdlib.h>

/*
using only recursive to sum from

1 + 2 + ... + n-th
*/

int sum(int n) {
	if (n > 1) {
		return (n + sum(n - 1)); // you can write back to n-th + ... + 3 + 2 + 1
	} else {
		return (1);
	}
}

int main() {
	
	int n;
	
	scanf("%d", &n);
	
	printf("%d", sum(n));
	
	return 0;
}