#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int *arr = malloc(5 * sizeof(int));
	
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	
	for (int j = 0; j < 5; j++) {
		if (arr[j] % 4 == 0 && arr[j] % 100 != 0) {
			printf("%d ", arr[j]); 
		}
	}
	
	return 0;
}