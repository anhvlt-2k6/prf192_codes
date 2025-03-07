#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
	int tvStationNumber [] = { 2,  3,  4,  5,  6,  7,  9, 11, 17, 25, 29, 36},
		cableChannel [] =    {17, 20, 16,  6,  3, 18,  8, 11, 61, 12, 28, 04},
		userEnterStationNumber = INT_MIN,
		cableNumber = INT_MIN;
	
	while (userEnterStationNumber == INT_MIN) {
		printf("Enter the TV Station Number: ");
		scanf_s("%d", &userEnterStationNumber);
	}
	
	for (int i = 0; i < 12; i++) {
		if (userEnterStationNumber == tvStationNumber[i]) {
			cableNumber = cableChannel[i];
			break;
		} else {
			continue;
		}
	}
	
	if (cableNumber == INT_MIN) {
		printf("There is no cable channel that satisfy your station number.");
	} else {
		printf("Your cable channel number: %d", cableNumber);
	}
	
	return 0;
}