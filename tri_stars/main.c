#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n;
	
	printf("Please enter the positive integer N: ");
	scanf("%d", &n);
	
	if (n <= 0) {
		return 0;
	} else {
		for (int i = 1; i <= n; i++) {
			for (int j = 0; j < i - 1; j++) {
				printf("  ");
			}
			
			for (int k = n - i; k >= 0; k--) {
				printf("* ");
			}
			
			printf("\n");
		}
		
		return 0;
	}
}