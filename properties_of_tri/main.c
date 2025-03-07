#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c;
	printf("Nhap ba kich thuoc cua tam giac: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	
	printf("Chu vi tam giac: %lf\n", a + b + c);
	double hp = (a + b + c)/2.0;
	printf("Dien tich tam giac: %lf", sqrt(hp*(hp-a)*(hp-b)*(hp-c)));
	return 0;
}