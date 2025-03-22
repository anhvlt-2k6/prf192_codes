#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int str_legth, total_upper = 0;
	char *str_a = malloc(101 * sizeof(char));
	
	scanf("%[^\n]", str_a);
	
	str_legth = strlen(str_a);
	
	str_a = realloc(str_a, str_legth * sizeof(char));
	
	for (int i = 0; i < str_legth; i++) {
		if ((int)str_a[i] >= (int)'A' && (int)str_a[i] <= (int)'Z') total_upper += 1;
	}
	
	printf("%d", total_upper);
	
	return 0;
}