#include <stdio.h>

/* different value access (r/w methods)
 const is not enough

Reference: https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html
		   https://gcc.gnu.org/onlinedocs/gcc/Common-Variable-Attributes.html
*/

int main() {
	// not safe
	const int a = 30;
	int *p = (int*)&a;
	*p = 40;
	printf("%d", a);
}