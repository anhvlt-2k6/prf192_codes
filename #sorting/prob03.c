#include <stdio.h>
#include <stdlib.h>

// sorting double (long float, float64_t)

int comp(const void *a, const void *b) {
	return *(double*)a - *(double*)b;
}

int main() {
	
	int n;
	double *arr;
	
	scanf("%d", &n);
	
	if (n < 1) {
		printf("Invalid Number");
		return 0;
	}
	
	arr = malloc(n * sizeof(double));
	
	for (int i = 0; i < n; i++) {
		scanf("%lf", &arr[i]);
	}
	
	qsort(arr, n, sizeof(double), comp);
	
	for (int j = 0; j < n; j++) {
		printf("%.1lf ", arr[j]);
	}
	
	return 0;
}