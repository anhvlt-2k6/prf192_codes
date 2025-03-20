#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	char *str_a = malloc(1024 * sizeof(char));
	int alpha = 0, dig = 0, special = 0, n;
	
	scanf("%[^\n]", str_a);
	
	n = strlen(str_a);
	str_a = realloc(str_a, n);
	
	for (int i = 0; i < n; i++) {
		if ((int)str_a[i] >= (int)'a' && (int)str_a[i] <= (int)'z') {
			alpha++;
		} else if ((int)str_a[i] >= (int)'A' && (int)str_a[i] <= (int)'Z') {
			alpha++;
		} else if ((int)str_a[i] >= (int)'0' && (int)str_a[i] <= (int)'9') {
			dig++;
		} else {
			special++;
		}
	}
	
	printf("%d\n%d\n%d", alpha, dig, special);
	
	return 0;
}