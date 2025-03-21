#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	
	scanf("%d", &n);
	
	if (n <= 0) {
		printf("Invalid input");
		return 0;
	}
	
	for (int i = 1; i <= n; i++) {
		//half left
		for (int j = n - i; j >= 1; j--) {
			printf("  ");
		}
		
		for (int k = i - 2; k >= 0; k--) {
			printf("* ");
		}
		
		//center
		printf("* ");
		
		//half right
		for (int l = i - 2; l >= 0; l--) {
			printf("* ");
		}
		
		printf("\n");
	}
	
	return 0;
}