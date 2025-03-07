#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define BIT16_PATTERN "%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c"
#define BYTE_TO_BIN(num) \
	((num) & 0x8000 ? '1' : '0'), \
	((num) & 0x4000 ? '1' : '0'), \
	((num) & 0x2000 ? '1' : '0'), \
	((num) & 0x1000 ? '1' : '0'), \
	((num) & 0x0800 ? '1' : '0'), \
	((num) & 0x0400 ? '1' : '0'), \
	((num) & 0x0200 ? '1' : '0'), \
	((num) & 0x0100 ? '1' : '0'), \
	((num) & 0x0080 ? '1' : '0'), \
	((num) & 0x0040 ? '1' : '0'), \
	((num) & 0x0020 ? '1' : '0'), \
	((num) & 0x0010 ? '1' : '0'), \
	((num) & 0x0008 ? '1' : '0'), \
	((num) & 0x0004 ? '1' : '0'), \
	((num) & 0x0002 ? '1' : '0'), \
	((num) & 0x0001 ? '1' : '0')

int main() {
	
	int16_t num;
	
	printf("Please enter integer N: ");
	scanf("%d", &num);
	
	printf(
	"Conversion results: %dd = "
	BIT16_PATTERN
	"b",
	num, BYTE_TO_BIN(num));
	
	return 0;
}