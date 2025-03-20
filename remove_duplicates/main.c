#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int sort_large_to_small(const void *a, const void *b) {
	return *(int*)b - *(int*)a;
}

int main() {
	int n, last = 0;
	int64_t *arr, *arr_new;
	
	scanf("%d", &n);
	
	arr = malloc(n * sizeof(int64_t));
	arr_new = malloc(n * sizeof(int64_t));
	
	for (int k = 0; k < n; k++) {
		scanf("%ld", &arr[k]);
	}
	
	qsort(arr, n, sizeof(int64_t), sort_large_to_small);
	
	for (int i = 0; i < n - 1; i++) {
		if (arr[i] != arr_new[last - 1]) {
			arr_new[last] = arr[i];
			last++;
		}
	}
	
	arr_new = realloc(arr_new, last * sizeof(int64_t));
	
	for (int j = 0; j < last; j++) {
		printf("%ld ", arr_new[j]);
	}
	
	return 0;
}