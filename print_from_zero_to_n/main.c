#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned int n;
	printf("Enter the number: ");
	scanf("%d", &n);

	for (int i = 0; i <= n; i++) {
		printf("%d\n", i);
	}
	return 0;
}
