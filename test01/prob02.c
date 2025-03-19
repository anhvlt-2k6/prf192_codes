#include <stdio.h>

int main() {
	
	double n, sum = 1;
	
	scanf("%lf", &n);
	
	if (n < 2) {
		printf("");
		return 0;
	} else if (n == 2) {
		printf("2");
		return 0;
	} else {
		for (int i = 1; i <= (int)n/2; i++) {
			if (i % 2 == 0) {
				sum = sum * i;
			}
		}
	}
	
	printf("%1.0lf", sum);
	
	return 0;
}