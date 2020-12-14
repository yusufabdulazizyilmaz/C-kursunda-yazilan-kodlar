//3 basamaklı armstrong sayilarinin bulunmasi

#include <stdio.h>

int main()
{
	int i = 100;

	while (i < 1000) {
		int d1 = i / 100;
		int d2 = i / 10 % 10;
		int d3 = i % 10;
		if (i == (d1 * d1 * d1) + (d2 * d2 * d2) + (d3 * d3 * d3))
			printf("%d\n", i);
		++i;
	}

}
