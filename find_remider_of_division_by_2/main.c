#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;

	printf("Nhap vao so tu nhien n: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		if (i%2 != 0) {
			printf("\n%d", i);
		}
	}

	printf("\n");
	return 0;
}
