#include <stdio.h>

int main() {
	int upper, lower, a, b, c; 
	
	scanf("%d %d", &upper, &lower);
	
	while (upper <= lower) {
		a = (int)upper/100;
		b = (int)(upper/10) % 10;
		c = (int)upper%10;
		
		if (b != 0 && c != 0 && a % b == 0 && b % c == 0) {
			printf("%d ", upper);
		}
		
		upper += 1;
	}
	
	return 0;
}