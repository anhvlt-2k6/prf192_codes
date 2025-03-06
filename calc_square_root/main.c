#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n;
	
	printf("Please enter any number: ");
	scanf("%d", &n);
	
	if (n < 0) {
		printf("Accept positive number only!");
	} else {
		printf("Square root of %d is: %lf", n, (double)sqrt(n));
	}
	
	return 0;
}