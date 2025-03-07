#include <stdio.h>
#include <stdlib.h>

double gcd(int a, int b) {
	int gcd_value = (a < b) ? a : b;
	while (gcd_value > 0) {
		if (a % gcd_value == 0 && b % gcd_value == 0) {
			break;
		}
		gcd_value--;
	}
	return gcd_value;
}

int main() {
	int a, b;
	double gcd_value = 0, lcm_value = 0;
	
	printf("Please enter the positive integer A: ");
	scanf("%d", &a);
	
	printf("Please enter the positive integer B: ");
	scanf("%d", &b);

	if (a < 0 || b < 0) {
		printf("A and B must be greater than or equal 0!");
		return 0;
	} else if (a == 0 || b == 0) {
		printf(
		"The greatest common divisor of %d and %d is %d\n"
		"The least    common multiple of %d and %d is %d",
		a, b, (a == 0) ? b : a,
		a, b, (a == 0) ? a : b);
		return 0;
	} else if (a == b) {
		printf(
		"The greatest common divisor of %d and %d is %d\n"
		"The least    common multiple of %d and %d is %d",
		a, b, a,
		a, b, a);
		return 0;
	} else {
		gcd_value = gcd(a, b);
		lcm_value = (double)(a * b)/gcd_value;
		
		printf(
		"The greatest common divisor of %d and %d is %.0lf\n"
		"The least    common multiple of %d and %d is %.0lf",
		a, b, gcd_value,
		a, b, lcm_value);
		return 0;
	}
}