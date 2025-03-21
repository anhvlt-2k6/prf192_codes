#include <stdio.h>
#include <stdlib.h>

int main() {
	
	double r;
	
	scanf("%lf", &r);
	
	printf(
	"%.2lf\n"
	"%.2lf",
	r * 2 * 3.14,
	r * r * 3.14
	);
	
	return 0;
}