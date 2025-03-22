#include <stdio.h>

int main() {
	
	int n, sum = 0;
	
	scanf("%d", &n);
	
	if (n < 1) {
		printf("Invalid Input");
		return 0;
	}
	
	for (int i = 1; i <= n; i++) {
		sum += i * i;
	}
	
	printf("%d", sum);
	
	return 0;
}