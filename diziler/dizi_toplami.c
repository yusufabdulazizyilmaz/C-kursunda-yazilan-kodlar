#include <stdio.h>
#include "nutility.h"

#define  SIZE    100

int main()
{
	int a[SIZE];
	
	randomize();
	set_array_random(a, SIZE);
	print_array(a, SIZE);

	int sum = 0;

	for (int i = 0; i < SIZE; ++i) {
		sum += a[i];
	}

	printf("sum = %d\n", sum);
}
