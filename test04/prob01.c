#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int a, b, c, half_tri;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if (!(a + b > c && a - b < c) || a <= 0 || b <= 0 || c <= 0) {
		printf("Invalid triangle");
		return 0;
	}
	
	half_tri = (double)(a+b+c)/2;
	
	printf("S = %lf", (double)sqrt(half_tri * (half_tri - a) * (half_tri - b) * (half_tri - c)));
	
	return 0;
}