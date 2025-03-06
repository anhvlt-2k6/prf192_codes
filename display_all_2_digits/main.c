#include <stdio.h>

int main() {
	
	for (int i = 10; i <= 99; i++) {
		if (i != 99) printf("%d, ", i);
		else printf("%d", i);
	}
	
	return 0;
}