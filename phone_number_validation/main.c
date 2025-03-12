#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool mobile_phone_number(const char *pon_num) {
	int len = strlen(pon_num);
	
	// check for if the first char is either 0
	if (pon_num[0] != '0') return false;
	
	// check for if the len is not 10 or 11
	if (len != 10 && len != 11) return false;
	
	for (int i = 1; i < len; i++) {
		if (!isdigit((unsigned char)pon_num[i])) return false;
	}
	
	return true;
}

bool telephone_number(const char *pon_num) {
	int len = strlen(pon_num);
	
	int close_paren_loc = -1;
	
	// if len < 6 its not phone num
	if (len < 6) return false;
	
	// if the start is not ( is not tele
	if (pon_num[0] != '(') return false;
	
	// check for the close paren
	for (int i = 0; i < len; i++) {
		if (pon_num[i] == ')') {
			close_paren_loc = i;
			break;
		}
		
		if (!isdigit((unsigned char)pon_num[i])) return false;

	}
	
	// no close paren detected
	if (close_paren_loc == -1) return false;
	
	// check inside (...)
	if (close_paren_loc - 1 < 2 || close_paren_loc - 1 > 4) return false;
	
	// check after the (...)
	if (len - (close_paren_loc + 1) != 7) return false;
	
	// check all other char except ()
	for (int i = close_paren_loc + 1; i < len; i++) {
        if (!isdigit((unsigned char)pon_num[i])) {
            return false;
        }
    }
	
	return true;
}

int main() {
	
	int n, count_valid = 0;
	char *pon_num;
	
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		pon_num = malloc(64 * sizeof(char));
		scanf("%63s", pon_num);
		
		if (mobile_phone_number(pon_num) || telephone_number(pon_num)) {
			count_valid++;
		}
	}
	
	printf("%d", count_valid);
	return 0;
}