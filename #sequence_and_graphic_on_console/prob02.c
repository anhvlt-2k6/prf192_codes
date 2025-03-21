#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;

	scanf("%d", &n);

	if (n < 1) {
		printf("N must be greater than 0!");
		return 0;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = i; j > 0; j--) {
			printf("%d ", j);
		}
		printf("\n");
	}
	
	return 0;
}
