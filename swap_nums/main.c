#include <stdio.h>

void swapNums(int *a, int *b) {
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

int main() {
  int a = 10, b = 20;
	
  swapNums(&a, &b);
	
  printf("%d %d\n", a, b);

  return 0;
}
