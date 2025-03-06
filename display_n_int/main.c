#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n;
	printf("How many number that you want to display? ");
	scanf("%d", &n);
	
	
	if (n > 0) {
		for (int i = 1; i <= n; i++) {
			if (i!=n) printf("%d, ", i);
			else printf("%d", i);
		}
	}
	else printf("Accept positive number only!");
	
	return 0;
}