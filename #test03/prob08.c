#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
	return *(int*)b - *(int*)a;
}

int main() {
	
	int n, count = 0, *arr, *dup;
	
	scanf("%d", &n);
	
	arr = malloc(n * sizeof(int));
	dup = malloc(n * sizeof(int));
	
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	qsort(arr, n, sizeof(int), comp);
	
	for (int j = 0; j < n - 1; j++) {
		if (arr[j] % 2 != 0 && arr[j] == arr[j+1] && (count == 0 || arr[j] != dup[count - 1])) {
			dup[count] = arr[j];
			count++;
		}
	}
	
	dup = realloc(dup, count * sizeof(int));
	
	for (int k = 0; k < count; k++) {
		printf("%d\n", dup[k]);
	}

	return 0;
}