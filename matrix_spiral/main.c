#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n, **arr;
	int num_all = 1, area_c;
	
	printf("Please enter the size of matrix: ");
	scanf("%d", &n);
	if (n <= 0) {
		printf("The size of matrix must greater than 0");
		return 0;
	}
	
	arr = malloc(n * sizeof(int *));
	for (int i = 0; i < n; i++) {
		arr[i] = malloc(n * sizeof(int));
	}
	
	area_c = pow(n, 2);	
	int top = 0, bottom = n - 1;
	int left = 0, right = n - 1;
	
	while (num_all <= area_c) {
		for (int col = left; col <= right && num_all <= n * n; col++) {
			arr[top][col] = num_all++;
		}
		top++;

		for (int row = top; row <= bottom && num_all <= n * n; row++) {
			arr[row][right] = num_all++;
		}
		right--;

		for (int col = right; col >= left && num_all <= n * n; col--) {
			arr[bottom][col] = num_all++;
		}
		bottom--;

		for (int row = bottom; row >= top && num_all <= n * n; row--) {
			arr[row][left] = num_all++;
		}
		left++;
	}

	
	printf("The spiral matrix which size is %dx%d is:\n", n, n);
	for (int o = 0; o < n; o++) {
		for (int q = 0; q < n; q++) {
			if (q != n - 1) printf("%2d ", arr[o][q]);
			else printf("%2d\n", arr[o][q]);
		}
	}

	return 0;
}