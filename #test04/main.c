#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

#include "prob01.h"
#include "prob02.h"
#include "prob03.h"
#include "prob04.h"

int main() {
	
	int choice;
	
	printf("Input for choice: ");
	scanf("%d", &choice);
	
	while (choice < 1 || choice > 4) {
		printf("Invalid input!\n");
		printf("Input for choice: ");
		scanf("%d", &choice);
	}
	
	if (choice == 1) {
		prob01();
	} else if (choice == 2) {
		prob02();
	} else if (choice == 3) {
		prob03();
	} else {
		prob04();
	}
	
	return 0;
}