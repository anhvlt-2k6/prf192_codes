#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n;
	
	scanf("%d", &n);
	
	// print the start that equal to the n
	for (int i = 0; i < n; i++) {
		printf("*");
	}
	
	printf("\n");
	
	for (int j = 1; j < n - 1; j++) {
		printf("*");
		for (int k = n - j - 3; k > -1; k--) {
			printf(" ");
		}
		printf("*\n");
	}
	
	printf("*");
	
	return 0;
}