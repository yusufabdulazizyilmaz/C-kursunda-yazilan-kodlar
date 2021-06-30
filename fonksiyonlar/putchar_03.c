#include <stdio.h>

void print_ascii_chars(void)
{
	for (int i = 33; i < 127; ++i)
		putchar(i);
}

int main(void)
{
	print_ascii_chars();
}
