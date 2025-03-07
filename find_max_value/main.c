#include <stdio.h>
#include <stdlib.h>

int main() {
	int number[3], max_value = INT_MIN;

	for (int i = 0; i < 3; i++) {
		printf("\nEnter number of order %d: ", i + 1);
		scanf("%d", &number[i]);
	}

	for (int j = 0; j < 3; j++) {
		if (number[j] % 2 == 0 && number[j] > max_value) {
			max_value = number[j];
		}
	}

	if (max_value == INT_MIN) {
		printf("There is no value that satisfied the problem\n");
	} else {
		printf("Max even number: %d", max_value);
	}

	return 0;
}