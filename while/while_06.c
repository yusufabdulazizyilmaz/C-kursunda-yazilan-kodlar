#include <stdio.h>

void f1(int n)
{
	while (n-- > 0)
		putchar('*');

	putchar('\n');
}

void f2(int n)
{
	while (n--)
		putchar('+');

	putchar('\n');
}

int main()
{
	f1(10);
	f2(20);
}
