#include <stdio.h>

int main()
{
	int x;
	//0'dan büyük 100'den kucuk olmali

	do {
		printf("sayi girin: ");
		(void)scanf("%d", &x);
	} while (x <= 0 || x >= 100);

	printf("girilen sayi = %d\n", x);
}
