#include <stdio.h>

int main()
{
	int x = 47802;

	printf("%x %d\n", x, x);
	printf("%X %d\n", x, x);
	printf("%#x %d\n", x, x);
	printf("%#X %d\n", x, x);
	printf("%12X %d\n", x, x);
	printf("%-12X %d\n", x, x);
	printf("%#12X %d\n", x, x);
	printf("%#-12X %d\n", x, x);
	printf("%012X %d\n", x, x);
	printf("%#012X %d\n", x, x);
}
