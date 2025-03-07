#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *s;
	s = malloc(1001 * sizeof(char));
	int map[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	scanf("%s", s);
	
	int length_str = strlen(s);
	s = realloc(s, length_str + 1);
	
	for (int i = 0; i < length_str; i++) {
		switch (s[i]) {
			case '0': map[0] += 1; break;
			case '1': map[1] += 1; break;
			case '2': map[2] += 1; break;
			case '3': map[3] += 1; break;
			case '4': map[4] += 1; break;
			case '5': map[5] += 1; break;
			case '6': map[6] += 1; break;
			case '7': map[7] += 1; break;
			case '8': map[8] += 1; break;
			case '9': map[9] += 1; break;
		}
	}
	
	for (int j = 0; j < 10; j++) {
		printf("%d ", map[j]);
	}
	
	return 0;
}