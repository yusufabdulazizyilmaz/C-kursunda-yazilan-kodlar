//pi sayısını hesaplıyoruz.

#include <stdio.h>

int main()
{
	double sum = 0.;

	for (int i = 0; i < 100'000'000; ++i) {  //dikkat extension (eklenti) digit separator
		if (i % 2 == 0)
			sum += 1. / (2 * i + 1);
		else
			sum -= 1. / (2 * i + 1);

	}

	printf("pi = %.12f\n", 4. * sum);
}
