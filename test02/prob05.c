#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *str_a;
	int n, vow = 0, conson = 0;
	str_a = malloc(1024 * sizeof(char) + 1);

	scanf("%[^\n]", str_a);
	
	n = strlen(str_a);
	str_a = realloc(str_a, n);
	
	for (int i = 0; i < n; i++) {
		if (((int)str_a[i] >= (int)'a' && (int)str_a[i] <= (int)'z') || ((int)str_a[i] >= (int)'A' && (int)str_a[i] <= (int)'Z')) {
			if ((int)str_a[i] == (int)'a' || (int)str_a[i] == (int)'e' || (int)str_a[i] == (int)'i' || (int)str_a[i] == (int)'o' || (int)str_a[i] == (int)'u') {
				vow++;
			} else if ((int)str_a[i] == (int)'A' || (int)str_a[i] == (int)'E' || (int)str_a[i] == (int)'I' || (int)str_a[i] == (int)'O' || (int)str_a[i] == (int)'U') {
				vow++;
			} else {
				conson++;
			}
		}
	}
	
	printf(
	"%d\n%d",
	vow, conson
	);
		
	return 0;
}