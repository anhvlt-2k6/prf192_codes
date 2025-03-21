#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n;
	
	scanf("%d", &n);
	
	// display the first line
	for (int i = 0; i < n; i++) {
		printf("*");
	}
	
	printf("\n");
	
	for (int j = 2; j < n + 1; j++) {
		printf("*");
		for (int k = n - j - 1; k > -1; k--) {
			printf(" ");
		}
		printf("*\n");
	}
	
	printf("*");
	
	return 0;
}