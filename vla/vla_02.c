#include <stdio.h>

void func(int n)
{
	int a[n];

	printf("boyut = %zu\n", sizeof(a) / sizeof(*a));
	//...
}

int main()
{
	for (int i = 1; i <= 10; ++i) {
		func(i);
	}
}
