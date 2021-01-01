#include <stdio.h>
#include <stdlib.h>

//#define  iprint(x)     printf("%d\n", x)
#define  iprint(x)     printf(#x " = %d\n", x)


int main()
{
	int x = 15, y = 20, z = 50;

	iprint(x);
	iprint(x + y + z);
	iprint(x * x + y * y + z * z);
}
