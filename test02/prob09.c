#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
	return *(int*)b - *(int*)a;
}

int main() {
	
	int *num, *duplicate, n, count = 0;
	
	scanf("%d", &n);
	
	num = malloc(n * sizeof(int));
	duplicate = malloc(n * sizeof(int));
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}
	
	qsort(num, n, sizeof(int), comp);
	
	for (int j = 0; j < n - 1; j++) {
		if (num[j] % 2 != 0 && num[j] == num[j+1] && num[j] != duplicate[count - 1]) {
			duplicate[count] = num[j];
			count++;
		}
	}
	
	duplicate = realloc(duplicate, count);
	
	for (int l = 0; l < count; l++) {
		printf("%d\n", duplicate[l]);
	}
	
	return 0;
}