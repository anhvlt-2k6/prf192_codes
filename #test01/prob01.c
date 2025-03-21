#include <stdio.h>

int main() {
	
	double a, b;
	
	scanf("%lf", &a);
	scanf("%lf", &b);
	
	if (a > b) {
		printf("float a > b");
	} else {
		printf("float a <= b");
	}
	
	return 0;
}