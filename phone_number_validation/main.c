#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool mobile_phone_number(const char *pon_num) {
	size_t len = strlen(pon_num);
	if (pon_num[0] != '0') return false;
	if (len != 10 && len != 11) return false;
	for (size_t i = 1; i < len; i++) {
		if (!isdigit((unsigned char)pon_num[i])) return false;
	}
	
	return true;
}

bool telephone_number(const char *pon_num) {
	size_t len = strlen(pon_num);
	int close_paren_loc = -1;
	if (len < 6) return false;
	if (pon_num[0] != '(') return false;
	
	for (int i = 0; i < (int)len; i++) {
		if (pon_num[i] == ')') {
			close_paren_loc = i;
			break;
		}
	}
	
	if (close_paren_loc == -1) return false;
	if (close_paren_loc - 1 < 2 || close_paren_loc - 1 > 4) return false;
	if ((int)len - (close_paren_loc + 1) != 7) return false;
	
	for (int j = 1; j < (int)len; j++) {
        if (j == close_paren_loc) {
            continue;
        }
        if (!isdigit((unsigned char)pon_num[j])) {
            return false;
        }
	}
	
	return true;
}

int main() {
	
	int n, count_valid = 0;
	char *pon_num = malloc(64 * sizeof(char));;
	
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%63s", pon_num);
		
		if (mobile_phone_number(pon_num) || telephone_number(pon_num)) {
			count_valid += 1;
		}
		
		free(pon_num);
	}
	
	printf("%d", count_valid);
	return 0;
}