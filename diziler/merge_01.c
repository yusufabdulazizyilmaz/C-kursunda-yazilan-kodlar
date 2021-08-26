#include <stdio.h>
#include <stdlib.h>
#include "nutility.h"


#define			SIZE		20

int icmp(const void* vp1, const void* vp2)
{
	return *(const int*)vp1 - *(const int*)vp2;
}


int main()
{
	int a[SIZE];
	int b[SIZE];
	int c[SIZE * 2];

	randomize();

	set_array_random(a, SIZE);
	set_array_random(b, SIZE);
	qsort(a, SIZE, sizeof(int), &icmp);
	qsort(b, SIZE, sizeof(int), &icmp);

	print_array(a, SIZE);
	print_array(b, SIZE);

	int idx_a = 0;
	int idx_b = 0;


	for (int i = 0; i < 2 * SIZE; ++i) {
		if (idx_a == SIZE) {
			c[i] = b[idx_b++];
		}
		else if (idx_b == SIZE) {
			c[i] = a[idx_a++];
		}
		else if (a[idx_a] < b[idx_b]) {
			c[i] = a[idx_a++];
		}
		else {
			c[i] = b[idx_b++];
		}
	}

	print_array(c, SIZE * 2);
}
