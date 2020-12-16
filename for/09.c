//e sayısını hesaplıyoruz.

#include <stdio.h>

int factorial(int n)
{
	return n < 2 ? 1 : n * factorial(n - 1);
}

int main()
{
	double sum = 0.;

	for (int i = 0; i < 10; ++i) {
		sum += 1. / factorial(i);
	}

	printf("sum = %f\n", sum);
}
