#include <stdio.h>

int main() {
	
	int width, height;
	
	scanf("%d %d", &width, &height);
	
	if (width < 2 || height < 2) {
		printf("Invalid input");
		return 0;
	}
	
	// dislay first line
	for (int i = height - 2; i >= 0; i--) {
		printf("  ");
	}
	
	for (int j = 1; j <= width; j++) {
		printf("* ");
	}
	
	printf("\n");
	
	//second to before the last
	for (int k = 2; k <= height - 1; k++) {
		for (int l = height - k; l >= 1; l--) {
			printf("  ");
		}
		
		for (int m = 1; m <= width; m++) {
			/*
			if (m == width) printf("*\n");
			else printf("* ");
			*/
			if (m == 1) {
				printf("* ");
			} else if (m == width) {
				printf("*\n");
			} else {
				printf("  ");
			}
		}
	}
	
	
	for (int n = 1; n <= width; n++) {
		printf("* ");
	}
	
	return 0;
}