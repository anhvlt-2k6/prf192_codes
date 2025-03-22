#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int n;
	
	scanf("%d", &n);
	
	if (n < 1) {
		printf("Invalid Input");
		return 0;
	}
	
	for (int i = n; i >= 1; i--) {
		if (n % i == 0) printf("%d ", i);
	}
	
	return 0;
}