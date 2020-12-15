#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	int c;
	int x;
	int counter = 0;
	int sum = 0;
	int min, max;

	srand((unsigned)time(0));

	while (1) {
		printf("sayi girecek misiniz? (e) (h): ");
		while ((c = _getch()) != 'e' && c != 'h')
			;
		printf("%c\n", c);
		if (c == 'h')
			break;
		printf("bir sayi girin: ");
		x = (rand() % 2 ? 1 : -1) * rand();
		printf("%d\n", x);

		if (counter == 0) //girilen ilk sayi
			min = max = x;
		else if (x < min)
			min = x;
		else if (x > max)
			max = x;

		++counter;
		sum += x;
	}

	if (counter == 0) {
		printf("hic sayi girmediniz\n");
	}
	else {
		printf("toplam %d sayi girdiniz\n", counter);
		printf("ortalama: %f\n", (double)sum / counter);
		printf("min = %d\n", min);
		printf("max = %d\n", max);
	}
}
