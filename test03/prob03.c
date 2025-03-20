#include <stdio.h>
#include <stdlib.h>

int sort_q(const void *a, const void *b) {
	return *(int*)b - *(int*)a;
}

int main() {
	
	int *arr, n;
	
	scanf("%d", &n);
	arr = malloc(n * sizeof(int));
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	qsort(arr, n, sizeof(int), sort_q);
	
	
	for (int j = 0; j < n; j++) {
		if (arr[j] % 2 != 0) {
			printf("%d ", arr[j]);
		}
	}
	
	return 0;
}