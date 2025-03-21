#include <stdio.h>

/*
Sum of number from a to n-th number of Collatz conjecture

If the number is odd, we multiply with 3 and add 1, if its even, divide by 2

Reference: https://www.youtube.com/watch?v=094y1Z2wpJg
*/

int sum_col(int a, int n) {
	if (a % 2 == 0) {
		a = (int)(double)(a / 2);
	} else {
		a = (a * 3 + 1);
	}
	
	if (n > 2) {
		return (a + sum_col(a, n - 1));
	} else {
		return (a);
	}
}

int main() {
	int a, n;
	
	scanf("%d %d", &a, &n);
	
	if (a <= 0 || n < 1) {
		printf("Invalid number");
	} else if (n == 1) {
		printf("%d", a);
	} else {
		printf("%d", (a + sum_col(a, n)));
	}
}