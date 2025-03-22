#include <stdio.h>

/* It is recommended to test gcc with this basic C code before proceeding anything else

	* Generate ASM file: gcc -S -fverbose-asm -O2 -o test01.asm test01.c
	* Generate WinPE file: gcc -O2 -o test01.exe test01.c
	* Generate *Nix file: gcc -O2 -o test01 test01.c
*/

int main() {
	printf("Hello World");
	return 0;
}