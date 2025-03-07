#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, *a, *b;
	
	printf("Please enter the positive integer N: ");
	scanf("%d", &n);
	
	if (n <= 0) {
		printf("Don't have any 2-digit number that the sum of digits of that number equal to %d", n);
		return 0;
	} else if (n > 9) {
		printf("Don't have any 2-digit number that the sum of digits of that number equal to %d", n);
		return 0;	
	} else {
		a = malloc(n * sizeof(int));
		b = malloc(n * sizeof(int));
		
		for (int i = 0; i < n; i++) {
			a[i] = i + 1;
			b[i] = n - a[i]; 
		}
		
		printf("All 2-digit numbers that the sum of digits of that number equal to %d are:\n", n);
		for (int j = 0; j < n; j++) {
			if (j != n - 1) printf("%d%d, ", a[j], b[j]);
			else printf("%d%d", a[j], b[j]);
		}
		
		return 0;
	}
}