#include <stdio.h>
#include <stdlib.h>

int main() {
	int m, n;
	
	printf("Please enter numerator  : ");
	scanf("%d", &m);
	
	printf("Please enter denominator: ");
	scanf("%d", &n);
	
	if (n == 0) {
		printf("The denominator can't be zero!");
	} else {
		printf("Result: %d / %d = %lf", m, n, (double)m/n);
	}
	
	return 0;
}