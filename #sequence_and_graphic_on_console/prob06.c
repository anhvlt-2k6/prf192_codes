#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, m;
	
	scanf("%d", &n);
	
	if (n <= 0) {
		printf("Invalid Input");
		return 0;
	}
	
	n = 2 * n - 1;
	m = (int)(n / 2);
	
	//upper
	for (int i = 1; i <= m; i++) {
		
		//left
		for (int j = m - i + 1; j >= 1; j--) {
			printf("  ");
		}
		
		for (int k = i - 1; k >= 1; k--) {
			printf("* ");
		}
		
		printf("* ");
		
		//right
		for (int l = i - 1; l >= 1; l--) {
			printf("* "); 
		}
		
		printf("\n");
	}
	
	//middle
	for (int m = 1; m <= n; m++) {
		printf("* ");
	}
	
	printf("\n");
	
	//lower
	for (int n = 1; n <= m; n++) {
		//right
		for (int o = 1; o <= n; o++) {
			printf("  ");
		}
		
		for (int p = m - n; p >= 1; p--) {
			printf("* ");
		}
		
		printf("* ");
		
		for (int q = m - n; q >= 1; q--) {
			printf("* ");
		}
	
		printf("\n");
	}
	
	return 0;
}
