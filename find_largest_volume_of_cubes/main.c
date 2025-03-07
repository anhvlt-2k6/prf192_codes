#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned int soLuong = 3;
	float chieuDai[soLuong], chieuRong[soLuong], chieuCao[soLuong], theTichLonNhat = 0;
	
	for (int i = 0; i < soLuong; i++) {
		printf("Nhap chieu dai cua hinh thu %d: ", i + 1);
		scanf("%f", &chieuDai[i]);
		printf("Nhap chieu rong cua hinh thu %d: ", i + 1);
		scanf("%f", &chieuRong[i]);
		printf("Nhap chieu cao cua hinh thu %d: ", i + 1);
		scanf("%f", &chieuCao[i]);
	}

	for (int j = 0; j < 3; j++) {
		if (chieuDai[j] * chieuRong[j] * chieuCao[j] >= theTichLonNhat) {
			theTichLonNhat = chieuDai[j] * chieuRong[j] * chieuCao[j];
		}
	}

	printf("The tich lon nhat: %f", theTichLonNhat);

	return 0;
}