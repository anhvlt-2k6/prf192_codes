#include <stdio.h>
#include <stdlib.h>

int main() {

	int a, b, tong = 0;
	printf("Nhap hai so tu nhien a va b: ");
	scanf("%d %d", &a, &b);

	for (int i = a; i >= a && i <= b; i++) {
		if (i%2 == 0) {
			tong = tong + i;
		}
	}

	printf("\nTong cac so chan la: %d\n", tong);
	return 0;
}
