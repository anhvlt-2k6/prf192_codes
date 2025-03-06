#include <stdio.h>
#include <stdlib.h>

int main() {
	int a;
	
	printf("Please enter any integer: ");
	scanf("%d", &a);
	
	printf(
	"The quotient  of %d divided by 2 is %d\n"
	"The remainder of %d divided by 2 is %d", 
	a, (int)a/2,
	a, (int)a%2);
	
	return 0;
}