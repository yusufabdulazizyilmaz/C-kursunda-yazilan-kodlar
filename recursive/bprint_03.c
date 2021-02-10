#include <stdio.h>

void bprint_r(unsigned val, unsigned n)
{
	if (n == 0)
		return;

	bprint_r(val >> 1, n - 1);
	putchar((val & 1) + '0');
}

void bprint(unsigned val)
{
	bprint_r(val, sizeof(val) * 8 - 1);
	putchar('\n');
}

int main()
{
	bprint(23);
	bprint(0);
}
