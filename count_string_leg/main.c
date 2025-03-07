#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    
    uint8_t num_in_arr = strlen(s);
    
	printf("%d", num_in_arr);
	
    return 0;
}