#include <stdio.h>

int abs(int val)
{
	if (val >= 0)
		return val;

	return -val;
}


int main()
{
	int x;
	printf("bir tamsayi girin: ");
	scanf("%d", &x);

	printf("|%d| = %d\n", x, abs(x));
}
