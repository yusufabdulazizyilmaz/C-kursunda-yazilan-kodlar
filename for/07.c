#include <stdio.h>

int main()
{
	int c;

	for (c = getchar(); c != '\n'; c = getchar())
		printf("%c %d\n", c, c);
}
