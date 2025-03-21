#include <stdio.h>
#include <stdlib.h>

/*
using only recursive to product from n (where n is the odd number

n * (n+2) * ... * (n + 2*?)
*/

int product(int start, int end) {
	if (start == end) {
		return start;
	} else {
		return start * product(start + 2, end);
	} 
}

int main() {
	
	int start, end;
	
	scanf("%d %d", &start, &end);
	
	if (start % 2 == 0 || end % 2 == 0 || start > end) {
		printf("Invalid number");
		return 0;
	} else if (start == end) {
		printf("%d", start);
		return 0;
	} else {
		printf("%d", product(start, end));
		return 0;
	}
}