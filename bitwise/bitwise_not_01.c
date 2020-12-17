#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void bprint2(int val)
{
	for (int i = (int)(sizeof(int) * 8 - 1); i >= 0; --i) {
		putchar((val >> i) & 1 ? '1' : '0');
	}
	putchar('\n');
}

int main()
{
	int x;
	printf("bir tamsayi girin: ");
	(void) scanf("%d", &x);

	bprint(x);
	bprint(~x);
	printf("x = %d\n", x); //bitsel degil operatörünün yan etkisi yok
}
