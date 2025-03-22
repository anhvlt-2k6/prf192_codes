#include <stdio.h>

int main() {
	double inp;
	
	scanf("%lf", &inp);
	
	if (inp < 0) {
		printf("Invalid input");
		return 0;
	}
	
	printf("%.2lf", inp * 2.20462);
	
	return 0;
}