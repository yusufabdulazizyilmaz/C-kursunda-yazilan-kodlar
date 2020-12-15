//3 basamaklı armstrong sayıları

#include <stdio.h>

int main()
{
	for (int i = 100; i < 1000; ++i) {
		int d1 = i % 10;
		int d2 = i / 10 % 10;
		int d3 = i / 100;
		if (i == (d1 * d1 * d1) + (d2 * d2 * d2) + (d3 * d3 * d3))
			printf("%d\n", i);
	}
}
