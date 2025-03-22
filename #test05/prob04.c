#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	
	scanf("%d", &n);
	
	printf("1\n");
	for (int i = 2; i <= n - 1; i++) {
		printf("1 ");
		
		for (int j = i - 3; j >= 0; j--) {
			printf("  ");
		}
		
		printf("%d\n", i);
	}
	
	for (int k = 1; k <= n; k++) {
		printf("%d ", k);
	}
	
	return 0;
}