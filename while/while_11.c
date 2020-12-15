#include <stdio.h>

int power(int base, int exp)
{
	int result = 1;

	while (exp--)
		result *= base;

	return result;
}

int main()
{
	int x, y;

	printf("iki tamsayi girin: ");
	(void)scanf("%d%d", &x, &y);

	printf("%d ==> %d = %d\n", x, y, power(x, y));
}
