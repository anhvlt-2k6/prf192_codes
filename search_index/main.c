#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

char *suf_num_get(int a) {
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
	int n, *arr, *arr_find, find_num, count = -1;
	char *suf_num;
	
	printf("How many element of numeric array? ");
	scanf("%d", &n);
	
	if (n <= 0) {
		printf("The number of element of numeric array must be greater than 0!");
		return 0;
	}
	
	arr = malloc(n * sizeof(int));
	arr_find = malloc(n * sizeof(int));
	suf_num = malloc(2 * sizeof(char));
	
	printf("Please enter value for %d elements:\n", n);
	for (int i = 0; i < n; i++) {
		suf_num = suf_num_get(i + 1);
		printf("Value of the %d%s element is: ", i + 1, suf_num);
		scanf("%d", &arr[i]);
	}
	
	printf("The entered array is:\n");
	for (int j = 0; j < n; j++) {
		if (j != n - 1) printf("%d, ", arr[j]);
		else printf("%d\n", arr[j]);
	}
	
	printf("Please enter the value that you want to find: ");
	scanf("%d", &find_num);
	
	for (int k = 0; k < n; k++) {
		if (find_num == arr[k]) {
			count++;
			arr_find[count] = k;
		}
	}
	
	if (count == -1) {
		printf("The value %d is not found in this array", find_num);
	} else {
		printf("All elements whose values are %d are found at indexes:\n", find_num);
		for (int l = 0; l < count + 1; l++) {
			if (l != count) printf("[%d], ", arr_find[l]);
			else printf("[%d]", arr_find[l]);
		}
	}
	
	return 0;
}