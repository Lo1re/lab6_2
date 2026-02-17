#include <stdio.h>
#include <stdarg.h>
#include "func.h"

int count_vowels(const char c, ...) {
	int count = 0;
	char ch = c;
	va_list args;
	va_start(args, c);
	while(ch != '\0') {
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
			ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
			count++;
		}
		ch = va_arg(args, int);
	}
	va_end(args);
	return count;
}
