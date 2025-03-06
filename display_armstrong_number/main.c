#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	int *arr;
	arr = malloc(32 * sizeof(int));
	int count = -1;
	
	for (int i = 100, j = 0; i <= 999; i++, j++) {
		if ((pow(i/100, 3) + pow((i/10) % 10, 3) + pow(i % 10, 3)) == i) {
			count++;
			arr[count] = i;
		}
	}
	
	printf("All Amstrong numbers are: ");
	for (int j = 0; j <= count; j++) {
		if(j != count) printf("%d, ", arr[j]);
		else printf("%d", arr[j]);
	}
	
	return 0;
}