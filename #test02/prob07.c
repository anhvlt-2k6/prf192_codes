#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	
	char *n;
	int pow_get, sum = 0;
	
	n = malloc(1024 * sizeof(char));
	
	scanf("%[^\n]", n);
	
	pow_get = strlen(n);
	n = realloc(n, pow_get);
	
	for (int i = 0; i < pow_get; i++) {
		if ((int)n[i] == (int)'1') {
			sum += pow(2, pow_get - i - 1);
		}
	}
	
	printf("%d", sum);
	
	return 0;
}