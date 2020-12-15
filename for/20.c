#include <stdio.h>

int main()
{
	int i, k;

	for (i = 0; i < 5; ++i)
		for (k = 0; k < 10; ++k)
			printf("(%d %d)\n", i, k);
}
