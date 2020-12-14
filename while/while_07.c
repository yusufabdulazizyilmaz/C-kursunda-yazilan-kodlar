#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int revdigit(int val)
{
	int result = 0;

	while (val != 0) {
		result = result * 10 + val % 10;
		val /= 10;
	}

	return result;
}


int main()
{
	int x;
	
	printf("bir tamsayi girin: ");
	scanf("%d", &x);

	printf("%d sayisi basamaksal tersi %d\n", x, revdigit(x));
}
