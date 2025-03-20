#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int sort_odd(const void *a, const void *b) {
	return *(int64_t*)b - *(int64_t*)a;
}

int sort_even(const void *a, const void *b) {
	return *(int64_t*)a - *(int64_t*)b;
}

int main() {
	
	int n, count_odd = 0, count_even = 0;
	int64_t *arr, *arr_odd, *arr_even;
	
	scanf("%d", &n);
	
	arr = malloc(n * sizeof(int64_t));
	arr_odd = malloc(n * sizeof(int64_t));
	arr_even = malloc(n * sizeof(int64_t));
	
	for (int i = 0; i < n; i++) {
		scanf("%ld", &arr[i]);
	}
	
	for (int j = 0; j < n; j++) {
		if (arr[j] % 2 == 0) {
			arr_even[count_even] = arr[j];
			count_even++;
		} else {
			arr_odd[count_odd] = arr[j];
			count_odd++;
		}
	}
	
	arr_odd = realloc(arr_odd, count_odd * sizeof(int64_t));
	qsort(arr_odd, count_odd, sizeof(int64_t), sort_odd);
	
	arr_even = realloc(arr_even, count_even * sizeof(int64_t));
	qsort(arr_even, count_even, sizeof(int64_t), sort_even);
	
	for (int k = 0; k < count_even; k++) {
		printf("%ld ", arr_even[k]); 
	}
	
	for (int l = 0; l < count_odd; l++) {
		printf("%ld ", arr_odd[l]);
	}
	
	return 0;
}