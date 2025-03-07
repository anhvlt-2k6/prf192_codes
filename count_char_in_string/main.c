#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int a_count = 0, e_count = 0, i_count = 0, o_count = 0, u_count = 0;
	
	char *s;
	s = malloc(1024 * sizeof(char));
	scanf("%[^\n]", s);
	s = realloc(s, strlen(s) + 1);
	
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] == 'a' || s[i] == 'A') a_count += 1;
		if (s[i] == 'e' || s[i] == 'E') e_count += 1;
		if (s[i] == 'i' || s[i] == 'I') i_count += 1;
		if (s[i] == 'o' || s[i] == 'O') o_count += 1;
		if (s[i] == 'u' || s[i] == 'U') u_count += 1;
	}
	
	printf(
	"A Count: %d\n"
	"E Count: %d\n"
	"I Count: %d\n"
	"O Count: %d\n"
	"U Count: %d\n",
	a_count,
	e_count,
	i_count,
	o_count,
	u_count
	);
	
	return 0;
}