#include <stdio.h>
#include <stdlib.h>

int sortf(const void *a, const void *b) {
	return *(double*)b - *(double*)a;
}

int main() {
	
	double *arr;
	
	arr = malloc(5 * sizeof(double));
	
	for (int i = 0; i < 5; i++) {
		scanf("%lf", &arr[i]);
	}
	
	qsort(arr, sizeof(arr)/sizeof(double), sizeof(double), sortf);
	
	for (int j = 0; j < 5; j++) {
		printf("%.6lf ", arr[j]);
	}
	
	return 0;
}