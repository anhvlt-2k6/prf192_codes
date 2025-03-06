#include <stdio.h>
#include <stdlib.h>

int main() {
	int a;
	
	printf("Please enter any integer: ");
	scanf("%d", &a);
	
	if (a < 0) printf("%d is a negative number", a);
	else if (a == 0) printf("The number entered is zero");
	else printf("%d is a positive number", a);
	
	return 0;
}