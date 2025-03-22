#include <stdio.h>
#include <stdbool.h>

int main() {
	int year, month;
	bool isEvenYear;
	
	scanf("%d", &year);
	scanf("%d", &month);
	
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		isEvenYear = true;
	} else {
		isEvenYear = false;
	}
	
	
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		printf("31");
	} else if (month == 2 && isEvenYear) {
		printf("29");
	} else if (month == 2 && !isEvenYear) {
		printf("28");
	} else {
		printf("30");
	}
	
	return 0;
}