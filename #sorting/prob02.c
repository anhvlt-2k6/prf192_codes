#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// sorting char (ASCII)

int mybetterprintf (const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfprintf( stdout, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

int comp(const void *a, const void *b) {
	return *(char*)a - *(char*)b;
}

int main() {
	
	int n;
	char *arr = malloc(1024 * sizeof(char));
	
	scanf("%[^\n]", arr);
	
	n = strlen(arr);
	
	arr = realloc(arr, n * sizeof(char));
	
	qsort(arr, n, sizeof(char), comp);
	
	for (int i = 0; i < n; i++) { 
		if (arr[i] != ' ' && arr[i] != arr[i - 1]) {
			mybetterprintf("%c ", arr[i]);
		}
	}
	
	return 0;
	
}