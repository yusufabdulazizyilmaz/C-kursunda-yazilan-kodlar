#include <stdio.h>

int main()
{
	for (int i = 33; i < 127; ++i)
		printf("%3d  %#5X     %c\n", i, i, i);
}
