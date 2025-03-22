#include <stdio.h>
#include <stdlib.h>

/* It is recommended to test gcc with this basic C code before proceeding anything else

	* Generate ASM file: gcc -S -fverbose-asm -O2 -o test00.asm test00.c
	* Generate WinPE file: gcc -O2 -o test00.exe test00.c
	* Generate *Nix file: gcc -O2 -o test00 test00.c
*/

// these following headers cannot be supported by C89
#ifdef __STDC_VERSION__ >= 199901L
#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#endif

// Debug is enabled, if you wish
#ifdef __DEBUG__

#endif

int main() {
	
	int n = 9;
	char *str_a = malloc(8 * sizeof(char));
	
	memset(str_a, 'A', 8);
	
	printf("%d", __STDC_VERSION__);

	return 0;
}