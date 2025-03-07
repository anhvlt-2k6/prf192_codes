#include <stdio.h>
#include <stdlib.h>

int main() {
	int *arr, n, count_neg = 0, count_pos = 0, count_zero = 0;
	
	printf("How many element of numeric array? ");
	scanf("%d", &n);
	
	if (n <= 0) {
		printf("The number of element of numeric array must be greater than 0!");
		return 0;
	}
	
	arr = malloc(n * sizeof(int));
	
	printf("Please enter value for %d elements:\n", n);
	for (int i = 0; i < n; i++) {
		printf("The value of a[%d] is: ", i);
		scanf("%d", &arr[i]);
		if (arr[i] < 0) count_neg += 1;
		else if (arr[i] == 0) count_zero += 1;
		else count_pos += 1;
	}
	
	printf(
	"The number of negative elements is %d\n"
	"The number of zero     elements is %d\n"
    "The number of positive elements is %d",
	count_neg, count_zero, count_pos);
	
	return 0;
}