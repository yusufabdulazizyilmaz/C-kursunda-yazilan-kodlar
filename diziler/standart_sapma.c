#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include "nutility.h"

#define  SIZE    100

int main()
{
	int a[SIZE];
		
	randomize();
	set_array_random(a, SIZE);
	print_array(a, SIZE);
	int sum = 0;

	for (int i = 0; i < SIZE; ++i)
		sum += a[i];

	double mean = (double)sum / SIZE;

	double sum_square = 0.;

	for (int i = 0; i < SIZE; ++i)
		sum_square += (a[i] - mean) * (a[i] - mean);

	double std_dev = sqrt(sum_square / (SIZE - 1));

	printf("standart sapma = %f\n", std_dev);
}
