#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	
	printf("Please enter the positive integer N: ");
	scanf("%d", &n);
	
	if (n <= 0) {
		printf("N must be greater than 0!");
		return 0;
	} else {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= i; j++) {
				printf("%d ", j);
			}
			printf("\n");
		}
		return 0;
	}
}