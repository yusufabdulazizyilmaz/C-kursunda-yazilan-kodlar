//while parantezi içinde virgül operatörünün kullanımına dikkat edelim

#include <stdio.h>

int main()
{
	int c;

	printf("bir yazi girin: ");
	while (c = getchar(), c != '\n') {
		printf("%c %d\n", c, c);
	}
}
