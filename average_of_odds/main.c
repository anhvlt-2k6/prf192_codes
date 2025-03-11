#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, inp, sum_odds = 0, count_odds = 0;
	
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &inp);
		if (inp % 2 != 0) {
			sum_odds += inp;
			count_odds += 1;
		}
	}
	
	if (count_odds > 0) {
		printf("%.3lf", (double)sum_odds/count_odds);
	} else {
		printf("No prime number exists");
	}
	
	return 0;
}