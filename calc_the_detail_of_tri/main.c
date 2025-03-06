#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int a, b, c;
	
	double half_pre = 0;
	
	printf("Please enter the first edge of triangle: ");
	scanf("%d", &a);
	
	printf("Please enter the second edge of triangle: ");
	scanf("%d", &b);

	printf("Please enter the third edge of triangle: ");
	scanf("%d", &c);
	
	if (a <= 0 || b <= 0 || c <= 0) {
		printf("These three numbers must be a positive number!");
		return 0;
	} else if (a < b + c && b < a + c && c < a + b) {
		half_pre = (double) (a + b + c)/2;
		printf("The perimeter of the triangle is %d\n", a + b + c);
		printf("The area      of the triangle is %lf", (double)sqrt(half_pre * (half_pre - a) * (half_pre - b) * (half_pre - c)));
		return 0; 
	} else {
		printf("These three numbers do not make a triangle!");
		return 0;
	}
}