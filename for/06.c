#include <stdio.h>

int factorial(int n)
{
	return n < 2 ? 1 : n * factorial(n - 1);
}

int main()
{
	for (int i = 0; i < 13; ++i) {
		printf("%d! = %d\n", i, factorial(i));
	}
}
