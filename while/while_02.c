#include <stdio.h>

int main()
{
	int c;

	printf("bir yazi girin: ");
	while ((c = getchar()) != '\n') {
		printf("%c %d\n", c, c);
	}
}
