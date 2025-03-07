#include <stdio.h>
#include <stdlib.h>

char *get_ordi(int num) {
	char *ordi_pr;
	ordi_pr = malloc(2 * sizeof(char));
	
	if (num > 10 && num < 20) {
		ordi_pr = "th";
	} else {
		if (num % 10 == 1) ordi_pr = "st";
		else if (num % 10 == 2) ordi_pr = "nd";
		else if (num % 10 == 3) ordi_pr = "rd";
		else ordi_pr = "th";
	}
	
	return ordi_pr;
}

int main() {
	int n, *arr, *arr_rev;
	char *ordi;
	
	ordi = malloc(2 * sizeof(char));
	
	printf("How many element of numeric array? ");
	scanf("%d", &n);
	
	if (n <= 0) {
		printf("The number of element of numeric array must be greater than 0!");
		return 0;
	}
	
	arr = malloc(n * sizeof(int));
	arr_rev = malloc(n * sizeof(int));
	
	printf("Please enter value for 5 elements:\n");
	for (int i = 0; i < n; i++) {
		ordi = get_ordi(i+1);
		printf("Value of the %d%s element is: ", i+1, ordi);
		scanf("%d", &arr[i]);
	}
	
	for (int j = 0; j < n; j++) {
		arr_rev[j] = arr[n - j - 1];
	}
	
	
	printf("The entered array is:\n");
	for (int k = 0; k < n; k++) {
		if (k != n - 1) printf("%d, ", arr[k]);
		else printf("%d\n", arr[k]);
	}
	
	printf("The reverse array is:\n");
	for (int l = 0; l < n; l++) {
		if (l != n - 1) printf("%d, ", arr_rev[l]);
		else printf("%d\n", arr_rev[l]);
	}
	
	return 0;
}