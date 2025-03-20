#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
	uint64_t n;
	char *arr = malloc(10240 * sizeof(char));
	int i = 0, count_string = 0;
	
	scanf("%lu", &n);
	
	while (n > 0) {
		if (n > 1) {
			if (n % 2 == 0) {
				arr[i] = '0';
			} else {
				arr[i] = '1';
			}
			
			i++;
			n = (int)n/2;
			count_string++;
		} else {
			if (n == 1) arr[i] = '1';
			else arr[i] = '0';
			i++;
			count_string++;
			break;
		}
	}
	
	arr = realloc(arr, count_string);
	
	for (int j = count_string - 1; j > -1; j--) {
		printf("%c", arr[j]);
	}
	
	return 0;
}