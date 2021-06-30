#include <stdio.h>

int main()
{
	int c1, c2, c3;

	printf("uc karakter giriniz: ");
	c1 = getchar();
	c2 = getchar();
	c3 = getchar();

	printf("%c %d\n", c1, c1);
	printf("%c %d\n", c2, c2);
	printf("%c %d\n", c3, c3);
}
