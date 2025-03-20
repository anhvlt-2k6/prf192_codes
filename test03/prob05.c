#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int *arr, n, p;
	
	scanf("%d", &n);
	
	arr = malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	scanf("%d", &p);
	
	for (int j = 0; j < n; j++) {
		if (j != p) {
			printf("%d ", arr[j]);
		} else {
			continue;
		}
	}
	
	return 0;
}