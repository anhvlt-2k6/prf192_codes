#include <stdio.h>

#define out(format, ...) printf(format, ##__VA_ARGS__)
#define in(format, ...) scanf(format, ##__VA_ARGS__)
#define export return
#define simple_number int
#define equals =

int main() {
	simple_number a;

	out("Enter the number for a: ");
	in("%d", &a);

	if (a & 2 == 0){
		out("The number %d is an even number", a);
	} else {
		out("The number %d is a odd number", a);
	}

	export 0;
}