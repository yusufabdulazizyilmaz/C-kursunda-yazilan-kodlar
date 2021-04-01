#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "nutility.h"

#define			SIZE		5000000

int icmp(const void* vp1, const void* vp2)
{
	//tasma riski olmadigina guvenerek
	return *(const int*)vp1 - *(const int*)vp2;
}


int main()
{
	clock_t start = clock();
	int* pd = (int*)malloc(SIZE * sizeof(int));
	if (!pd) {
		fprintf(stderr, "bellek yetersiz\n");
		return 1;
	}
	randomize();
	set_random_array(pd, SIZE);
	qsort(pd, SIZE, sizeof * pd, &icmp);
	clock_t end = clock();
	printf("sure: %f saniye\n", (double)(end - start) / CLOCKS_PER_SEC);
}

