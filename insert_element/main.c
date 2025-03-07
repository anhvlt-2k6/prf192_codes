#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char *get_suf(int a) {
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
	bool isPassed = false;
	int n, *arr, *arr_new, new_int_added, add_loc;
	char *suf_num;
	
	printf("How many element of numeric array? ");
	scanf("%d", &n);
	
	if (n <= 0) {
		printf("The number of element of numeric array must be greater than 0!");
		return 0;
	}
	
	arr = malloc(n * sizeof(int));
	arr_new = malloc((n + 1) * sizeof(int));
	suf_num = malloc(2 * sizeof(char));
	
	printf("Please enter value for %d elements:\n", n);
	for (int i = 0; i < n; i++) {
		suf_num = get_suf(i + 1);
		printf("Value of the %d%s element is: ", i + 1, suf_num);
		scanf("%d", &arr[i]);
	}
	
	printf("The entered array is:\n");
	for (int j = 0; j < n; j++) {
		if (j != n - 1) printf("%d, ", arr[j]);
		else printf("%d\n", arr[j]);
	}
	
	printf("Please enter the value that you want to insert: ");
	scanf("%d", &new_int_added);
	
	printf("Please enter index that the new value will be inserted: ");
	scanf("%d", &add_loc);
	
	while (add_loc < 0 || add_loc > n - 1) {
		printf(
		"The index must be from 0 to %d!\n"
		"Please enter index that the new value will be inserted: ",
		n);
		scanf("%d", &add_loc);
	}
	
	for (int k = 0; k < n + 1; k++) {
		if (k == add_loc) {
			arr_new[k] = new_int_added;
			isPassed = true;
		} else {
			if (isPassed) {
				arr_new[k] = arr[k - 1];
			} else {
				arr_new[k] = arr[k];
			}
		}
	}
	
	printf("The array after insert %d into the place that indexed [%d] is:\n", new_int_added, add_loc);
	for (int l = 0; l < n + 1; l++) {
		if (l != n) printf("%d, ", arr_new[l]);
		else printf("%d", arr_new[l]);
	}
	
	return 0;
}