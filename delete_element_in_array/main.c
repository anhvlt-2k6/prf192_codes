#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	
	int arrayCount, arrayDeleteLoc;
	bool isReachedDeletion = false;
	scanf("%d %d", &arrayCount, &arrayDeleteLoc);
	
	arrayDeleteLoc -= 1;
	
	int arr[arrayCount];
	int arrnew[arrayCount - 1];
	for (int i = 0; i < arrayCount; i++) {
		scanf("%d", &arr[i]);
	}
	
	for (int j = 0; j < arrayCount; j++) {
		if (j != arrayDeleteLoc) {
			if (isReachedDeletion) {
				arrnew[j - 1] = arr[j];
			} else {
				arrnew[j] = arr[j];
			}
		} else {
			isReachedDeletion = true;
		}
	}
	
	for (int k = 0; k < arrayCount - 1; k++) {
		printf("%d ", arrnew[k]);
	}
	
	return 0;
}