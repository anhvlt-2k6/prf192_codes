#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
	return *(int*)b - *(int*)a;
}

int main() {
	
	int n, *arr;
	
	scanf("%d", &n);
	
	if (n < 1) {
		printf("Invalid Input");
		return 0;
	}
	
	arr = malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	qsort(arr, n, sizeof(int), comp);
	
	for (int j = 0; j < n; j++) {
		if (arr[j] % 2 != 0) printf("%d ", arr[j]);
	}
	
	return 0;
}