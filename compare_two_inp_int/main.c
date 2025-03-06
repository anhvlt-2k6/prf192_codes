#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b;
	
	printf("Please enter the first number: ");
	scanf("%d", &a);
	
	printf("Please enter the second number: ");
	scanf("%d", &b);
	
	if (a < b) {
		printf("Comparison results: %d is greater than %d", a, b); 
	} else if (a == b) {
		printf("Comparison results: both numbers are equal"); 
	} else {
		printf("Comparison results: %d is less than %d", a, b); 
	}
	
	return 0;
}