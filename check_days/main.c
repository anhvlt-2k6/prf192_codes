#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int m, y;
	
	scanf("%d %d", &m, &y);
	
	if (m < 1 || m > 12) {
		printf("invalid input");
		return 0;
	}
	
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
		printf("31");
	} else if (m == 2) {
		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
			printf("29");
		} else {
			printf("28");
		}
	} else {
		printf("30");
	}
	
	
	return 0;
}