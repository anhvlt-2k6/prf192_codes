#include <stdio.h>
#include <stdlib.h>

int main() {
	int rows_a, col_a, rows_b, col_b;
	int **a, **b;
	
	printf("Please enter value for the first matrix A:\n");
	
    printf("Please enter number of rows: ");
    scanf("%d", &rows_a);
    if (rows_a <= 0) {
        printf("The number of rows must be greater than 0\n");
        return 0;
    }
	
    printf("Please enter number of columns: ");
    scanf("%d", &col_a);
    if (col_a <= 0) {
        printf("The number of columns must be greater than 0\n");
        return 0;
    }
	
	a = malloc(rows_a * sizeof(int *));
    for (int i = 0; i < rows_a; i++) {
        a[i] = malloc(col_a * sizeof(int));
    }
	
    for (int k = 0; k < rows_a; k++) {
        for (int l = 0; l < col_a; l++) {
            printf("Please enter value for A[%d][%d]: ", k + 1, l + 1);
            scanf("%d", &a[k][l]);
        }
    }
	
	printf(
	"--------------------\n"
	"Please enter value for the second matrix B:\n");
	
	printf("Please enter number of rows: ");
	scanf("%d", &rows_b);
	
	if (rows_b <= 0) {
		printf("The number of columns must greater than 0");
		return 0;
	}
	
	printf("Please enter number of columns: ");
	scanf("%d", &col_b);
	
	if (col_b <= 0) {
		printf("The number of columns must greater than 0");
		return 0;
	}
	
	b = malloc(rows_b * sizeof(int*));
	for (int j = 0; j < rows_b; j++) {
		b[j] = malloc(col_b * sizeof(int));
	}
	
	for (int m = 0; m < rows_b; m++) {
		for (int n = 0; n < col_b; n++) {
			printf("Please enter value for b[%d][%d]: ", m + 1, n + 1);
			scanf("%d", &b[m][n]);
		}
	}
	
	if (rows_a != rows_b || col_a != col_b) {
		printf("Unable to proceed");
		return 0;
	}
	
	printf("The matrix C = A + B is\n");
	for (int o = 0; o < rows_a; o++) {
		for (int q = 0; q < col_a; q++) {
			if (q != rows_a - 1) printf(" %d", a[o][q] + b[o][q]);
			else printf(" %d\n", a[o][q] + b[o][q]);
		}
	}
	
	return 0;
}