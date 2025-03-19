#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int *arr, n, v, p;
	
	scanf("%d", &n);
	
	arr = malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	scanf("%d %d", &v, &p);
	
	for (int j = 0; j < n + 1; j++) {
		if (j < p) {
			printf("%d ", arr[j]);
		} else if (j == p) {
			printf("%d ", v);
		} else {
			printf("%d ", arr[j - 1]);
		}
	}
	
	return 0;
}