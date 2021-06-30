#include <stdio.h>

int main()
{
	int ch;

	printf("evet mi (e) hayir mi (h) :  ");

	ch = getchar();
	if (ch == 'e')
		printf("evet dediniz\n");
	else if (ch == 'h')
		printf("hayir dediniz\n");
	else
		printf("gecersiz cevap\n");
}
