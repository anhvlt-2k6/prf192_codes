#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	char *str_a;
	int n, upper = 0, lower = 0, special = 0;
	str_a = malloc(1024 * sizeof(char));
	
	scanf("%[^\n]", str_a);
	
	n = strlen(str_a);
	str_a = realloc(str_a, n);
	
	for (int i = 0; i < n; i++) {
		if ((int)str_a[i] >= (int)'a' && (int)str_a[i] <= (int)'z') {
			lower++;
		} else if ((int)str_a[i] >= (int)'A' && (int)str_a[i] <= (int)'Z') {
			upper++;
		} else {
			special++;
		}
	}
	
	printf(
	"Upper: %d\n"
	"Lower: %d\n"
	"Special: %d\n",
	upper, lower, special);
	
	return 0;
}