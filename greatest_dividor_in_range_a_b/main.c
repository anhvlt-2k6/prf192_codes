#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
	int a, b, c, soLonNhat = INT_MIN;

	printf("Nhap ba so a b c: ");
	scanf("%d %d %d", &a, &b, &c);

	for (int i = b; i >= a && i <= b; i--) {
		if (i%c == 0) {
			soLonNhat = i;
			break;
		}
	}

	if (soLonNhat == INT_MIN) {
		printf("Khong co so nao thoa man bai toan\n");
	} else {
		printf("So lon nhat chia het cho %d trong khoang tu %d den %d la: %d\n", c, a, b, soLonNhat);
	}

	return 0;
}
