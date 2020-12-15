#include <stdio.h>

int main()
{
	int x;
	//0'dan büyük 100'den kucuk olmali

	while (1) {
		printf("sayi girin: ");
		scanf("%d", &x);
		if (x > 0 && x < 100)
			break;
	}

	printf("girilen sayi = %d\n", x);

}
