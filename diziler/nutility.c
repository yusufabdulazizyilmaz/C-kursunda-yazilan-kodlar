#include "nutility.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int ndigit(int val)
{
	if (val == 0)
		return 1;

	int digit_count = 0;

	while (val) {
		++digit_count;
		val /= 10;
	}

	return digit_count;
}

/***********************************************************************************************/

int isprime(int val)
{
	if (val == 0 || val == 1)
		return 0;

	if (val % 2 == 0)
		return val == 2;

	if (val % 3 == 0)
		return val == 3;

	if (val % 5 == 0)
		return val == 5;

	for (int k = 7; k * k <= val; k += 2)
		if (val % k == 0)
			return 0;

	return 1;
}

/***********************************************************************************************/

void dashline(void)
{
	printf("\n-------------------------------------------------------------------------------\n");
}

/***********************************************************************************************/

void randomize(void)
{
	srand((unsigned)time(NULL));
}


/***********************************************************************************************/

void set_array_random(int* p, int size)
{
	while (size--) {
		*p++ = rand() % 1000;
	}
}


/***********************************************************************************************/
void print_array(const int* p, int size)
{
	for (int i = 0; i < size; ++i) {
		if (i && i % 20 == 0)
			printf("\n");
		printf("%3d ", p[i]);
	}
	dashline();
}
