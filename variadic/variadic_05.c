#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int myprintf(const char* p, ...)
{
	va_list args;
	va_start(args, p);
	int sum = 0;

	while (*p != '\0') {
		int c = toupper(*p);
		if (c == 'I') {
			sum += printf("%d\n", va_arg(args, int));
		}
		else if (c == 'F' || c == 'D') {
			sum += printf("%f\n", va_arg(args, double));
		}
		else if (c == 'C') {
			sum += printf("%c\n", va_arg(args, int));
		}
		else if (c == 'L') {
			sum += printf("%ld\n", va_arg(args, long));
		}
		else if (c == 'U') {
			sum += printf("%u\n", va_arg(args, unsigned));
		}
		else if (c == 'S') {
			sum += printf("%s\n", va_arg(args, const char *));
		}
		++p;
	}

	va_end(args);

	return sum;
}


int main()
{
	int x = 10;
	double dval = 3.8234;
	float f = 34.7234f;
	char ch = 'A';
	char str[] = "serkan baysak";

	myprintf("iFdcLUS", x, f, dval, ch, 5432L, 7634U, str);

}
