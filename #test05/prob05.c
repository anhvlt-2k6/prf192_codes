#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n, *arr, sum = 0;
	scanf("%d", &n);
	
	if (n < 1) {
		printf("Invalid Input");
		return 0;
	}
	
	arr = malloc(n * sizeof(int));
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	for (int j = 0; j < n; j++) {
		if (arr[j] % 2 != 0) sum += arr[j];
	}
	
	if (sum == 0) {
		printf("No odd numbers");
	} else {
		printf("%d", sum);
	}
	
	return 0;
}