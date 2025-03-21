#include <stdio.h>

/*
fibonacci (?) number product series from n to m

Fib series look like this: 0,1,1,2,3,5,..., but let exclude the 0 and starting from 1 instead (we all know why)
*/

// calc the n-th fibbonaci number
// 1st and 2nd number is 1
int fib_calc(int n) {
	int a = 1; //1st number
	int b = 1; //2nd number
	int c; //swap
	
	if (n == 1) {
		return b;
	} else if (n == 2) {
		return a;
	} for (int i = 3; i <= n; i++) { // starting from 3 since the 1st and 2nd is 1
		c = a;
		a = b;
		b = a + c;
	}
	
	return b;
}

int product_fib(int start, int end) {
	if (start == end) {
		return fib_calc(start);
	} else {
		return fib_calc(start) * product_fib(start + 1, end);
	}
}

int main() {
	
	int start, end, previous;
	
	scanf("%d %d", &start, &end);
	
	if (start > end) {
		printf("Invalid input!");
		return 0;
	} else if (start == end) {
		printf("%d", fib_calc(start));
		return 0;
	} else {
		printf("%d", product_fib(start, end));
		return 0;
	}
}