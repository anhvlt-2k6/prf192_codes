#include <stdio.h>
#include <stdlib.h>

int comp(const void* a,const void* b) {
      return *(int*)b - *(int*)a;
}

int main() {
	int rangeMemory, comparisonNumber;
	
	printf("Nhap so phan tu cho array va so bi chia: ");
	scanf_s("%d %d", &rangeMemory, &comparisonNumber);
	
	int arr[rangeMemory];
	
	for (int i = 0; i < rangeMemory; i++) {
        scanf_s("%d", &arr[i]);
    }
	
	qsort(arr, sizeof(arr)/sizeof(arr[0]), sizeof(int), comp);
	
	for (int j = 0; j < rangeMemory; j++) {
		if (arr[j] % comparisonNumber == 0) {
			printf("%d ", arr[j]);
		} else {
			continue;
		}
	}
	
	return 0;
}