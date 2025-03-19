#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp(const void *a, const void *b) {
	return *(char*)a - *(char*)b;
}

int main() {
	
	char *str_a;
	int n;
	str_a = (char*)malloc(1024 * sizeof(char));
	
	scanf("%[^\n]", str_a);
	
	n = strlen(str_a);
	str_a = (char*)realloc(str_a, n);
	qsort(str_a, n, sizeof(char), comp);
	
	for (int i = 0; i < n; i++) {
		printf("%c ", str_a[i]);
	}
	
	return 0;
}