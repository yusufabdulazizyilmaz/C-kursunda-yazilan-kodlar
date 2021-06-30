#include <stdio.h>

int main()
{
	int ch;
	int sum = 0;

	printf("bir sayi giriniz: ");

	while ((ch = getchar()) != '\n') {
		sum += ch - '0';
	}

	if (sum % 3 == 0)
		printf("girdiginiz sayi 3'e tam bolunur\n");
	else
		printf("girdiginiz sayi 3'e tam bolunmez\n");
}
