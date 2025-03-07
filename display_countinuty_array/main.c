#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	bool a[10] = {false};
	
	for (int i = 0; i < 10; i++) {
		if (a[i] == true) {
			printf("%d. True\n", i);
		} else {
			printf("%d. False\n", i);
		}
	}
	
	return 0;
}