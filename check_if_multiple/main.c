#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int a, b;
	
	printf("Please enter dividend: ");
	scanf("%d", &a);
	
	printf("Please enter divisor: ");
	scanf("%d", &b);
	
	if (b == 0) {
		printf("The divisor can't be zero!");
	} else if (a % b == 0) {
		printf("%d is a multiple of %d", a, b);
	} else {
		printf("%d is not a multiple of %d", a, b);
	}
	
	return 0;
}