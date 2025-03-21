#include <stdio.h>
#include <stdlib.h>

// sorting int number

int comp(const void *a, const void *b) {
	return *(int*)a - *(int*)b;
}

int main() {
	
	int n, *arr;
	
	scanf("%d", &n);
	
	if (n < 1) {
		printf("Invalid input");
		return 0;
	}
	
	arr = malloc(n * sizeof(int));
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	qsort(arr, n, sizeof(int), comp);
	
	for (int j = 0; j < n; j++) {
		printf("%d ", arr[j]);
	}
	
	return 0;
}
