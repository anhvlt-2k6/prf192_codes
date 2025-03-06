#include <stdio.h>

int main() {
	
	for (int i = -999; i <= -100; i++) {
		if (i != -100) printf("%d, ", i);
		else printf("%d", i);
	}
	
	return 0;
}