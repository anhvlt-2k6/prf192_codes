#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	int n, sum = 0;

	printf("Please enter positive integer N: ");
	scanf("%d", &n);
	
	if (n <= 0) {
		printf("Accept positive number only!");
		return 0;
	} else if (n == 1) {
		printf("The sum is S = 1");
		return 0;
	} else {
		for (int i = 1; i <= n; i++) {
			sum += pow((-1), i + 1) * i;
		}
		
		printf("The sum is S = ");
		for (int j = 1; j <= n; j++) {
			if (j == 1) printf("1");
			else if (j % 2 == 0) printf(" - %d", j);
			else printf(" + %d", j);
		}
		
		printf(" = %d", sum);

		return 0;
	}
}