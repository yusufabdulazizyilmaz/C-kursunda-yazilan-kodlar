#include <stdio.h>
#include "nutility.h"

#define  SIZE    100

int main()
{
	int a[SIZE];
	
	randomize();
	set_array_random(a, SIZE);
	print_array(a, SIZE);

	int odd_count = 0;
	int odd_sum = 0;

	for (int i = 0; i < SIZE; ++i) {
		if (a[i] % 2) {
			++odd_count;
			odd_sum += a[i];
		}
	}

	if (odd_count)
		printf("teklerin ortalamasi = %f\n", (double)odd_sum / odd_count);
	else
		printf("dizide hic tek sayi yok\n");

}
