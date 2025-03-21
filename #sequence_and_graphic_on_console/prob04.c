#include <stdio.h>

int main() {
	
	int n;
	
	scanf("%d", &n);
	
	if (n <= 0) {
		printf("Invalid input!");
		return 0;
	}
	
	for (int i = 1; i <= n; i++) {
		for (int j = n - i - 1; j >= 0; j--) {
			printf("  ");
		}
		
		for (int k = i; k >= 1; k--) {
			printf("* ");
		}
		
		printf("\n");
	}
	
	return 0;
}