#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int height, radius;
	
	printf("Please enter the base's radius of the cylinder: ");
	scanf("%d", &radius);
	
	printf("Please enter the height        of the cylinder: ");
	scanf("%d", &height);
	
	if (height <= 0 || radius <= 0) {
		printf("The height and radius of cylinder must be a positive number!");
		return 0;
	} else {
		printf(
		"The total surface area of the cylinder is %lf\n"
		"The volume             of the cylinder is %lf",
		(double)height * 2 * M_PI * radius + 2 * M_PI * radius * radius,
		(double)height * M_PI * radius * radius);
		return 0;
	}
}
