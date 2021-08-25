#include <stdio.h>

#define   SIZE   10

int main()
{
	int a[SIZE] = {0};

	for (int i = 0; i < SIZE; ++i)
		printf("a[%d] = %d\n", i, a[i]);
}
