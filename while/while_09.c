#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int sumdigit(int val)
{
	int sum = 0;

	while (val != 0) {
		sum += val % 10;
		val /= 10;
	}

	return sum;
}

int main()
{
	int x;
	printf("bir tamsayi girin: ");
	scanf("%d", &x);

	printf("%d sayisi basamaklari toplami %d\n", x, sumdigit(x));
}

