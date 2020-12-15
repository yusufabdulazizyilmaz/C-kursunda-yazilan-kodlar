#include <stdio.h>

int main()
{
	int x;
	
	printf("bir tamsayi girin: ");
	(void)scanf("%d", &x);

	if (x % 2 == 0)
		printf("%d cift sayi\n", x);
	else
		printf("%d tek sayi\n", x);
}
