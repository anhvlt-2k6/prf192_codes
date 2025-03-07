#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>

int main() {
	int sum = 0;
	char *arr;
	arr = malloc(16 * sizeof(char));
	
	printf("Please a 16-bit binary number: ");
	for (int i = 0; i < 16; i++) {
		scanf(" %c", &arr[i]);
	}
	
	for (int j = 0; j < 16; j++) {
		sum += (arr[j] - '0') * pow(2, 15 - j); 
	}
	
	printf("Conversion results: ");
	for (int k = 0; k < 16; k++) {
		printf("%c", arr[k]);
	}
	printf("b = %dd", sum);
	
	return 0;
}