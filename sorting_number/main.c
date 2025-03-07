#include <stdio.h>
#include <stdlib.h>

int cmp(const void *ptr1, const void *ptr2) {
	int *x = (int*)ptr1;
	int *y = (int*)ptr2;
	if (*x < *y) return -1;
	else return 1;
}

char *sur_num_get(int a) {
	if (10 < a && a < 20) {
		return "th";
	} else {
		if (a % 10 == 1) return "st";
		else if (a % 10 == 2) return "nd";
		else if (a % 10 == 3) return "rd";
		else return "th";
	}
}

int main() {
	int n, *arr;
	char *suf_num;
	
	printf("How many element of numeric array? ");
	scanf("%d", &n);
	
	if (n <= 0) {
		printf("The number of element of numeric array must be greater than 0!");
		return 0;
	}
	
	arr = malloc(n * sizeof(int));
	suf_num = malloc(2 * sizeof(char));

	printf("Please enter value for %d elements:\n", n);
	for (int i = 0; i < n; i++) {
		suf_num = sur_num_get(i + 1);
		printf("Value of the %d%s element is: ", i + 1, suf_num);
		scanf("%d", &arr[i]);
	}
	
	printf("The entered array is:\n");
	for (int j = 0; j < n; j++) {
		if (j != n - 1) printf("%d, ", arr[j]);
		else printf("%d\n", arr[j]);
	}
	
	qsort(arr, n, sizeof(int), cmp);
	
	printf("The sorted array is:\n");
	for (int k = 0; k < n; k++) {
		if (k != n - 1) printf("%d, ", arr[k]);
		else printf("%d", arr[k]);
	}
	
	return 0;
}